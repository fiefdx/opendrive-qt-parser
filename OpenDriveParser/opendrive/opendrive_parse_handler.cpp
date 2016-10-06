// Qt includes
#include <QDebug>
#include <QString>

// C++ includes
#include <typeinfo>  // typeid operator

// Project includes
#include "opendrive_parse_handler.hpp"
#include "opendrive/opendrive_map.hpp"
#include "opendrive/map_elements/opendrive_map_element.hpp"
#include "opendrive/map_elements/roads/opendrive_road.hpp"
#include "opendrive/map_elements/roads/lanes/lane/opendrive_road_lane.hpp"
#include "opendrive/map_elements/roads/lanes/lane/link/opendrive_road_lane_link_predecessor.hpp"

OpenDriveParseHandler::OpenDriveParseHandler(OpenDriveMap* map) :
  map_(map) {

}

bool OpenDriveParseHandler::startElement(const QString& namespaceURI,
                                         const QString& localName,
                                         const QString& qName,
                                         const QXmlAttributes& atts) {
  Q_UNUSED(localName);
  Q_UNUSED(namespaceURI);

  if (qName == "header") {
    map_->header_ = new OpenDriveMapHeader();
    set_map_elements(atts, map_->header_->function_map_);

  } else if (qName == "road") {
    map_->roads_.push_back(new OpenDriveRoad());
    last_link_parent_.push(map_->roads_.back());
    set_map_elements(atts, map_->roads_.back()->function_map_);

  } else if (qName == "link") {
    if (!last_link_parent_.size()) {
      qDebug() << "OpenDriveParseUtil: Found a link element with no valid "
                  "parent element!";
      return false;
    }

    OpenDriveMapElement* link_parent = last_link_parent_.top();

    if (typeid(*link_parent).hash_code() == typeid(OpenDriveRoad).hash_code()) {
      OpenDriveRoadLink* new_link = new OpenDriveRoadLink();
      static_cast<OpenDriveRoad*>(link_parent)->link_ = new_link;
      last_link_.push(new_link);
    } else if (typeid(*link_parent).hash_code() ==
               typeid(OpenDriveRoadLane*).hash_code()) {
      OpenDriveRoadLaneLink* new_link = new OpenDriveRoadLaneLink();
      static_cast<OpenDriveRoadLane*>(link_parent)->link_ = new_link;
      last_link_.push(new_link);
    }

  } else if (qName == "predecessor") {
    OpenDriveMapElement* last_link = last_link_.top();

    if (typeid(*last_link).hash_code() == typeid(OpenDriveRoadLink).hash_code()) {
      OpenDriveRoadLinkPredecessor* predecessor =
        new OpenDriveRoadLinkPredecessor();

      set_map_elements(atts, predecessor->function_map_);
      static_cast<OpenDriveRoadLink*>(last_link)->predecessor_ = predecessor;
    } else if (typeid(*last_link).hash_code() ==
               typeid(OpenDriveRoadLaneLink).hash_code()) {
      OpenDriveRoadLaneLinkPredecessor* predecessor =
        new OpenDriveRoadLaneLinkPredecessor();

      set_map_elements(atts, predecessor->function_map_);
      static_cast<OpenDriveRoadLaneLink*>(last_link)->predecessor_ = predecessor;
    }

  } else if (qName == "lanes") {
    map_->roads_.back()->lanes_ = new OpenDriveRoadLanes();

  } else if (qName == "laneOffset") {
    OpenDriveRoadLaneOffset* lane_offset = new OpenDriveRoadLaneOffset();
    set_map_elements(atts, lane_offset->function_map_);

    map_->roads_.back()->lanes_->lane_offsets_.push_back(lane_offset);

  } else if (qName == "laneSection") {
    OpenDriveRoadLaneSection* lane_section = new OpenDriveRoadLaneSection();
    set_map_elements(atts, lane_section->function_map_);

    map_->roads_.back()->lanes_->lane_sections_.push_back(lane_section);

  } else {
    qDebug() << "Element name:" << qName;

    for (int i = 0; i < atts.length(); i++) {
      qDebug() << "  attribute" << atts.qName(i) << "has value" << atts.value(i);
    }
  }

  return true;
}

bool OpenDriveParseHandler::endElement(const QString& namespaceURI,
                                       const QString& localName,
                                       const QString& qName) {
  Q_UNUSED(namespaceURI);
  Q_UNUSED(localName);

  if (qName == "road") {
    last_link_parent_.pop();
  } else if (qName == "lane") {
    last_link_parent_.pop();
  } else if (qName == "link") {
    last_link_.pop();
    last_speed_parent_.pop();
  } else if (qName == "type") {
    last_speed_parent_.pop();
  } else if (qName == "object"    || qName == "objectReferece" ||
             qName == "tunnel"    || qName == "bridge"         ||
             qName == "signal"    || qName == "signalReference") {
    last_validity_parent_.pop();
  }

  return true;
}

bool OpenDriveParseHandler::set_map_elements(const QXmlAttributes& atts,
        const std::map<QString, std::function<bool (QString)>>& function_map_) {
  bool success = true;

  for (int i = 0; i < atts.count(); i++) {
    auto map_element = function_map_.find(atts.qName(i));

    if (map_element != function_map_.end()) {
      map_element->second(atts.value(i));
    } else {
      success = false;
    }
  }

  return success;
}

OpenDriveRoad* OpenDriveParseHandler::get_last_added_road() {
  OpenDriveRoad* last_road = nullptr;

  if (map_) {
    if (map_->roads_.size()) {
        last_road = map_->roads_[map_->roads_.size() - 1];
    }
  }

  return last_road;
}
