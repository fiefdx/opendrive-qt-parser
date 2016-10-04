// C++ includes
#include <cstddef> // size_t

// Project includes
#include "opendrive_road_link.hpp"

OpenDriveRoadLink::OpenDriveRoadLink() : OpenDriveMapElement() {

}

OpenDriveRoadLink::~OpenDriveRoadLink() {
  if (predecessor_) delete predecessor_;
  if (successor_)   delete successor_;
  for (size_t i = 0; i < neighbors_.size();) delete neighbors_[i++];
}
