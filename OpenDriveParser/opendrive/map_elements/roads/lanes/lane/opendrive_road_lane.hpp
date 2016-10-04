#ifndef OPENDRIVEROADLANE_HPP
#define OPENDRIVEROADLANE_HPP

// Project includes
#include "opendrive/map_elements/opendrive_map_element.hpp"
#include "opendrive/map_elements/roads/lanes/lane/link/opendriveroad_lane_link.hpp"

class OpenDriveRoadLane : public OpenDriveMapElement {
 public:
  OpenDriveRoadLane();

  OpenDriveRoadLaneLink* link_;
};

#endif // OPENDRIVEROADLANE_HPP
