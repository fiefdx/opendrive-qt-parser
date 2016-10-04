// C++ includes
#include <cstddef> // size_t

// Project includes
#include "opendrive_road.hpp"

OpenDriveRoad::OpenDriveRoad() : OpenDriveMapElement() {

}

OpenDriveRoad::~OpenDriveRoad() {
  if  (link_)              delete link_;
  for (size_t i = 0; i < types_.size();)             delete types_[i++];
  if  (plan_view_)         delete plan_view_;
  if  (elevation_profile_) delete elevation_profile_;
  if  (lateral_profile_)   delete lateral_profile_;
  if  (lanes_)             delete lanes_;
  if  (objects_)           delete objects_;
  if  (signals_)           delete signals_;
  for (size_t i = 0; i < surfaces_.size();)          delete surfaces_[i++];
  for (size_t i = 0; i < railroad_switches_.size();) delete railroad_switches_[i++];
}
