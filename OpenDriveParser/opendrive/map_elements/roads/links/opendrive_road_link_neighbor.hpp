#ifndef OPENDRIVEROADLINKNEIGHBOR_HPP
#define OPENDRIVEROADLINKNEIGHBOR_HPP

// C++ includes
#include <functional>
#include <map>

// Qt includes
#include <QString>

// Project includes
#include "opendrive/opendrive_parse_util.hpp"

class OpenDriveRoadLinkNeighbor {
 public:
  OpenDriveRoadLinkNeighbor();

  QString get_side()       { return side_; }
  QString get_element_id() { return element_id_; }
  QString get_direction()  { return direction_; }

  std::map<QString, std::function<bool(QString)>> function_map_ = {
    {"side", std::bind(&OpenDriveParseUtil::set_parsed_value<QString>,
                       std::placeholders::_1, std::ref(side_))},
    {"elementId", std::bind(&OpenDriveParseUtil::set_parsed_value<QString>,
                            std::placeholders::_1, std::ref(element_id_))},
    {"direction", std::bind(&OpenDriveParseUtil::set_parsed_value<QString>,
                            std::placeholders::_1, std::ref(direction_))}
  };

 private:
  QString side_;
  QString element_id_;
  QString direction_;
};

#endif // OPENDRIVEROADLINKNEIGHBOR_HPP
