#ifndef OPENDRIVEROADLANES_HPP
#define OPENDRIVEROADLANES_HPP

// C++ includes
#include <vector>

// Project includes
#include "opendrive/map_elements/roads/lanes/laneoffset/opendrive_road_lane_offset.hpp"
#include "opendrive/map_elements/roads/lanes/lanesection/opendrive_road_lane_section.hpp"

class OpenDriveRoadLanes {
 public:
  OpenDriveRoadLanes();
  ~OpenDriveRoadLanes();

  std::vector<OpenDriveRoadLaneOffset*> lane_offsets_;
  std::vector<OpenDriveRoadLaneSection*> lane_sections_;
};

#endif // OPENDRIVEROADLANES_HPP
