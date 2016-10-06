#ifndef OPENDRIVEROADLANELINK_HPP
#define OPENDRIVEROADLANELINK_HPP

// Project includes
#include "opendrive/map_elements/opendrive_map_element.hpp"
#include "opendrive/map_elements/roads/lanes/lane/link/opendrive_road_lane_link_predecessor.hpp"
#include "opendrive/map_elements/roads/lanes/lane/link/opendrive_road_lane_link_successor.hpp"

class OpenDriveRoadLaneLink : public OpenDriveMapElement {
 public:
  OpenDriveRoadLaneLink();

  OpenDriveRoadLaneLinkPredecessor* predecessor_ = nullptr;
  OpenDriveRoadLaneLinkSuccessor* successor = nullptr;
};

#endif // OPENDRIVEROADLANELINK_HPP
