#include "opendrive_road_lanes.hpp"

OpenDriveRoadLanes::OpenDriveRoadLanes() {

}

OpenDriveRoadLanes::~OpenDriveRoadLanes() {
  for (unsigned int i = 0; i < lane_offsets_.size();) delete lane_offsets_[i++];
  for (unsigned int i = 0; i < lane_sections_.size();) delete lane_sections_[i++];
}
