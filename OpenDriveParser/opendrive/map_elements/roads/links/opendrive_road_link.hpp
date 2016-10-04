#ifndef OPENDRIVEROADLINK_HPP
#define OPENDRIVEROADLINK_HPP

// C++ includes
#include <vector>

// Project includes
#include "opendrive/map_elements/opendrive_map_element.hpp"
#include "opendrive/map_elements/roads/links/opendrive_road_link_predecessor.hpp"
#include "opendrive/map_elements/roads/links/opendrive_road_link_successor.hpp"
#include "opendrive/map_elements/roads/links/opendrive_road_link_neighbor.hpp"

class OpenDriveRoadLink : public OpenDriveMapElement {
 public:
  OpenDriveRoadLink();
  ~OpenDriveRoadLink();

  OpenDriveRoadLinkPredecessor* predecessor_ = nullptr;
  OpenDriveRoadLinkSuccessor* successor_ = nullptr;
  std::vector<OpenDriveRoadLinkNeighbor*> neighbors_;
};

#endif // OPENDRIVEROADLINK_HPP
