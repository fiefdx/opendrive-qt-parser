#include "opendrive_map.hpp"

OpenDriveMap::OpenDriveMap() {

}

OpenDriveMap::~OpenDriveMap() {
  if (header_) delete header_;
}
