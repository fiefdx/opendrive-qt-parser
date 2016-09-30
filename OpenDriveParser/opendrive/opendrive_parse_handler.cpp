
// Qt includes
#include <QDebug>
#include <QString>

// Project includes
#include "opendrive_parse_handler.hpp"
#include "opendrive/opendrive_map.hpp"

OpenDriveParseHandler::OpenDriveParseHandler(OpenDriveMap* map) :
  map_(map) {

}

bool OpenDriveParseHandler::startElement(const QString &namespaceURI,
                                         const QString &localName,
                                         const QString &qName,
                                         const QXmlAttributes &atts) {
  Q_UNUSED(localName);
  Q_UNUSED(namespaceURI);

  if (qName == "header") {
    map_->header_ = new OpenDriveMapHeader();
    set_map_elements(atts, map_->header_->function_map_);
  } else {
    qDebug() << "Element name:" << qName;

    for (int i = 0; i < atts.length(); i++) {
      qDebug() << "  attribute" << atts.qName(i) << "has value" << atts.value(i);
    }
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
