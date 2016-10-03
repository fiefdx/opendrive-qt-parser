#ifndef OPENDRIVEROAD_HPP
#define OPENDRIVEROAD_HPP

// C++ includes
#include <vector>

// Project includes
#include "opendrive/map_elements/roads/links/opendrive_road_link.hpp"
#include "opendrive/map_elements/roads/types/opendrive_road_type.hpp"
#include "opendrive/map_elements/roads/planview/opendrive_road_planview.hpp"
#include "opendrive/map_elements/roads/elevationprofile/opendrive_road_elevation_profile.hpp"
#include "opendrive/map_elements/roads/lateralprofile/opendrive_road_lateral_profile.hpp"
#include "opendrive/map_elements/roads/lanes/opendrive_road_lanes.hpp"
#include "opendrive/map_elements/roads/objects/opendrive_road_objects.hpp"
#include "opendrive/map_elements/roads/signals/opendrive_road_signals.hpp"
#include "opendrive/map_elements/roads/surface/opendrive_road_crg.hpp"
#include "opendrive/map_elements/roads/railroad/opendrive_railroad_switch.hpp"

class OpenDriveRoad {
 public:
  OpenDriveRoad();
  ~OpenDriveRoad();

  OpenDriveRoadLink* link_ = nullptr;
  std::vector<OpenDriveRoadType*> types_;
  OpenDriveRoadPlanView* plan_view_ = nullptr;
  OpenDriveRoadElevationProfile* elevation_profile_ = nullptr;
  OpenDriveRoadLateralProfile* lateral_profile_ = nullptr;
  OpenDriveRoadLanes* lanes_ = nullptr;
  OpenDriveRoadObjects* objects_ = nullptr;
  OpenDriveRoadSignals* signals_ = nullptr;
  std::vector<OpenDriveRoadCRG*> surfaces_;
  std::vector<OpenDriveRailroadSwitch*> railroad_switches_;
};

#endif // OPENDRIVEROAD_HPP
