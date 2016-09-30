#ifndef OPENDRIVEMAP_HPP
#define OPENDRIVEMAP_HPP

// Project includes
#include "opendrive/map_elements/opendrive_map_header.hpp"

class OpenDriveMapHeader;

class OpenDriveMap {
 public:
  OpenDriveMap();
  ~OpenDriveMap();

  OpenDriveMapHeader* header_ = nullptr;
};

#endif // OPENDRIVEMAP_HPP
