#ifndef OPENDRIVEROADLANESECTION_HPP
#define OPENDRIVEROADLANESECTION_HPP

// C++ includes
#include <functional>
#include <map>

// Qt includes
#include <QString>

// Project includes
#include "opendrive/opendrive_parse_util.hpp"
#include "opendrive/map_elements/roads/lanes/lane/opendrive_road_lane.hpp"

class OpenDriveRoadLaneSection {
 public:
  OpenDriveRoadLaneSection();

  double get_s()            { return s_; }
  QString get_single_side() { return single_side_; }

  std::map<QString, std::function<bool(QString)>> function_map_ = {
    {"s", std::bind(&OpenDriveParseUtil::set_parsed_value<double>,
                    std::placeholders::_1, std::ref(s_))},
    {"single_side_", std::bind(&OpenDriveParseUtil::set_parsed_value<QString>,
                               std::placeholders::_1, std::ref(single_side_))}
  };

  OpenDriveRoadLane* left_lane_ = nullptr;
  OpenDriveRoadLane* center_lane_ = nullptr;
  OpenDriveRoadLane* right_lane_ = nullptr;

 private:
  double s_;
  QString single_side_;
};

#endif // OPENDRIVEROADLANESECTION_HPP
