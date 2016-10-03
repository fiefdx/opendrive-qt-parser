#ifndef OPENDRIVEMAP_HPP
#define OPENDRIVEMAP_HPP

// C++ includes
#include <vector>

// Project includes
#include "opendrive/map_elements/opendrive_map_header.hpp"
#include "opendrive/map_elements/roads/opendrive_road.hpp"

class OpenDriveMapHeader;

class OpenDriveMap {
 public:
  OpenDriveMap();
  ~OpenDriveMap();

  void print_map();

  OpenDriveMapHeader* header_ = nullptr;
  std::vector<OpenDriveRoad*> roads_;
};

#endif // OPENDRIVEMAP_HPP
