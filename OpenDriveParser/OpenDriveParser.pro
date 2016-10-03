#-------------------------------------------------
#
# Project created by QtCreator 2016-09-29T19:42:09
#
#-------------------------------------------------

QT       += core gui xml

CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OpenDriveParser
TEMPLATE = app


SOURCES += main.cpp\
    opendrive_parser.cpp \
    opendrive/opendrive_parse_handler.cpp \
    opendrive/map_elements/opendrive_map_header.cpp \
    opendrive/opendrive_map.cpp \
    opendrive/opendrive_parse_util.cpp \
    opendrive/map_elements/roads/opendrive_road.cpp \
    opendrive/map_elements/roads/links/opendrive_road_link.cpp \
    opendrive/map_elements/roads/links/opendrive_road_link_successor.cpp \
    opendrive/map_elements/roads/links/opendrive_road_link_predecessor.cpp \
    opendrive/map_elements/roads/links/opendrive_road_link_neighbor.cpp \
    opendrive/map_elements/roads/types/opendrive_road_type.cpp \
    opendrive/map_elements/roads/types/opendrive_road_speed.cpp \
    opendrive/map_elements/roads/planview/opendrive_road_planview.cpp \
    opendrive/map_elements/roads/planview/geometry/opendrive_geometry_spiral.cpp \
    opendrive/map_elements/roads/planview/geometry/opendrive_geometry_arc.cpp \
    opendrive/map_elements/roads/planview/geometry/opendrive_geometry_poly3.cpp \
    opendrive/map_elements/roads/elevationprofile/opendrive_road_elevation.cpp \
    opendrive/map_elements/roads/elevationprofile/opendrive_road_elevation_profile.cpp \
    opendrive/map_elements/roads/lateralprofile/opendrive_road_lateral_profile.cpp \
    opendrive/map_elements/roads/lateralprofile/opendrive_road_superelevation.cpp \
    opendrive/map_elements/roads/lateralprofile/opendrive_road_crossfall.cpp \
    opendrive/map_elements/roads/lateralprofile/opendrive_road_shape.cpp \
    opendrive/map_elements/roads/lanes/opendrive_road_lanes.cpp \
    opendrive/map_elements/roads/lanes/laneoffset/opendrive_road_lane_offset.cpp \
    opendrive/map_elements/roads/lanes/lanesection/opendrive_road_lane_section.cpp \
    opendrive/map_elements/roads/planview/geometry/opendrive_geometry_parampoly3.cpp \
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane.cpp \
    opendrive/map_elements/roads/lanes/lane/link/opendriveroad_lane_link.cpp \
    opendrive/map_elements/roads/lanes/lane/link/opendrive_road_lane_link_predecessor.cpp \
    opendrive/map_elements/roads/lanes/lane/link/opendrive_road_lane_link_successor.cpp \
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane_width.cpp \
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane_border.cpp \
    opendrive/map_elements/roads/lanes/lane/roadmark/opendrive_road_lane_mark.cpp \
    opendrive/map_elements/roads/lanes/lane/roadmark/type/opendrive_road_lane_mark_type.cpp \
    opendrive/map_elements/roads/lanes/lane/roadmark/type/opendrive_road_lane_mark_type_line.cpp \
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane_material.cpp \
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane_visibility.cpp \
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane_speed.cpp \
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane_access.cpp \
    opendrive/map_elements/roads/lanes/lane/opendriveroadlaneheight.cpp \
    opendrive/map_elements/roads/objects/object/opendrive_road_object.cpp \
    opendrive/map_elements/roads/objects/object/opendrive_road_object_repeat.cpp \
    opendrive/map_elements/roads/objects/object/outline/opendrive_road_object_outline_cornerroad.cpp \
    opendrive/map_elements/roads/objects/object/outline/opendrive_road_object_outline_cornerlocal.cpp \
    opendrive/map_elements/roads/objects/object/opendrive_road_object_material.cpp \
    opendrive/map_elements/roads/objects/object/opendrive_road_object_validity.cpp \
    opendrive/map_elements/roads/objects/object/parkingspace/opendrive_road_object_parkingspace.cpp \
    opendrive/map_elements/roads/objects/object/parkingspace/opendrive_road_object_parking_spacemarking.cpp \
    opendrive/map_elements/roads/objects/opendrive_road_object_reference.cpp \
    opendrive/map_elements/roads/objects/opendrive_road_object_tunnel.cpp \
    opendrive/map_elements/roads/objects/opendrive_road_object_bridge.cpp \
    opendrive/map_elements/roads/signals/signal/opendrive_road_signal.cpp \
    opendrive/map_elements/roads/signals/signal/opendrive_road_signal_validity.cpp \
    opendrive/map_elements/roads/signals/signal/opendrive_road_signal_dependency.cpp \
    opendrive/map_elements/roads/signals/opendrive_road_signal_reference.cpp \
    opendrive/map_elements/roads/surface/opendrive_road_crg.cpp \
    opendrive/map_elements/roads/railroad/opendrive_railroad_switch.cpp \
    opendrive/map_elements/roads/railroad/opendrive_railroad_maintrack.cpp \
    opendrive/map_elements/roads/railroad/opendrive_railroad_sidetrack.cpp \
    opendrive/map_elements/roads/railroad/opendrive_railroad_partner.cpp \
    opendrive/map_elements/controller/opendrive_controller.cpp \
    opendrive/map_elements/controller/opendrive_controller_control.cpp \
    opendrive/map_elements/junction/opendrive_junction.cpp \
    opendrive/map_elements/junction/connection/opendrive_junction_connection.cpp \
    opendrive/map_elements/junction/connection/opendrive_junction_connection_lanelink.cpp \
    opendrive/map_elements/junction/opendrive_junction_priority.cpp \
    opendrive/map_elements/junction/opendrive_junction_controller.cpp \
    opendrive/map_elements/junctiongroup/opendrive_junction_group.cpp \
    opendrive/map_elements/junctiongroup/opendrive_junction_group_reference.cpp \
    opendrive/map_elements/station/opendrive_station.cpp \
    opendrive/map_elements/station/platform/opendrive_station_platform.cpp \
    opendrive/map_elements/station/platform/opendrive_station_platform_segment.cpp

HEADERS  += \
    opendrive_parser.hpp \
    opendrive/opendrive_parse_handler.hpp \
    opendrive/map_elements/opendrive_map_header.hpp \
    opendrive/opendrive_map.hpp \
    opendrive/opendrive_parse_util.hpp \
    opendrive/map_elements/roads/opendrive_road.hpp \
    opendrive/map_elements/roads/links/opendrive_road_link.hpp \
    opendrive/map_elements/roads/links/opendrive_road_link_successor.hpp \
    opendrive/map_elements/roads/links/opendrive_road_link_predecessor.hpp \
    opendrive/map_elements/roads/links/opendrive_road_link_neighbor.hpp \
    opendrive/map_elements/roads/types/opendrive_road_type.hpp \
    opendrive/map_elements/roads/types/opendrive_road_speed.hpp \
    opendrive/map_elements/roads/planview/opendrive_road_planview.hpp \
    opendrive/map_elements/roads/planview/geometry/opendrive_geometry_spiral.hpp \
    opendrive/map_elements/roads/planview/geometry/opendrive_geometry_arc.hpp \
    opendrive/map_elements/roads/planview/geometry/opendrive_geometry_poly3.hpp \
    opendrive/map_elements/roads/elevationprofile/opendrive_road_elevation.hpp \
    opendrive/map_elements/roads/elevationprofile/opendrive_road_elevation_profile.hpp \
    opendrive/map_elements/roads/lateralprofile/opendrive_road_lateral_profile.hpp \
    opendrive/map_elements/roads/lateralprofile/opendrive_road_superelevation.hpp \
    opendrive/map_elements/roads/lateralprofile/opendrive_road_crossfall.hpp \
    opendrive/map_elements/roads/lateralprofile/opendrive_road_shape.hpp \
    opendrive/map_elements/roads/lanes/opendrive_road_lanes.hpp \
    opendrive/map_elements/roads/lanes/laneoffset/opendrive_road_lane_offset.hpp \
    opendrive/map_elements/roads/lanes/lanesection/opendrive_road_lane_section.hpp \
    opendrive/map_elements/roads/planview/geometry/opendrive_geometry_parampoly3.hpp \
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane.hpp \
    opendrive/map_elements/roads/lanes/lane/link/opendriveroad_lane_link.hpp \
    opendrive/map_elements/roads/lanes/lane/link/opendrive_road_lane_link_predecessor.hpp \
    opendrive/map_elements/roads/lanes/lane/link/opendrive_road_lane_link_successor.hpp \
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane_width.hpp \
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane_border.hpp \
    opendrive/map_elements/roads/lanes/lane/roadmark/opendrive_road_lane_mark.hpp \
    opendrive/map_elements/roads/lanes/lane/roadmark/type/opendrive_road_lane_mark_type.hpp \
    opendrive/map_elements/roads/lanes/lane/roadmark/type/opendrive_road_lane_mark_type_line.hpp \
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane_material.hpp \
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane_visibility.hpp \
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane_speed.hpp \
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane_access.hpp \
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane_height.hpp \
    opendrive/map_elements/roads/objects/object/opendrive_road_object.hpp \
    opendrive/map_elements/roads/objects/object/opendrive_road_object_repeat.hpp \
    opendrive/map_elements/roads/objects/object/outline/opendrive_road_object_outline_cornerroad.hpp \
    opendrive/map_elements/roads/objects/object/outline/opendrive_road_object_outline_cornerlocal.hpp \
    opendrive/map_elements/roads/objects/object/opendrive_road_object_material.hpp \
    opendrive/map_elements/roads/objects/object/opendrive_road_object_validity.hpp \
    opendrive/map_elements/roads/objects/object/parkingspace/opendrive_road_object_parkingspace.hpp \
    opendrive/map_elements/roads/objects/object/parkingspace/opendrive_road_object_parking_spacemarking.hpp \
    opendrive/map_elements/roads/objects/opendrive_road_object_reference.hpp \
    opendrive/map_elements/roads/objects/opendrive_road_object_tunnel.hpp \
    opendrive/map_elements/roads/objects/opendrive_road_object_bridge.hpp \
    opendrive/map_elements/roads/signals/signal/opendrive_road_signal.hpp \
    opendrive/map_elements/roads/signals/signal/opendrive_road_signal_validity.hpp \
    opendrive/map_elements/roads/signals/signal/opendrive_road_signal_dependency.hpp \
    opendrive/map_elements/roads/signals/opendrive_road_signal_reference.hpp \
    opendrive/map_elements/roads/surface/opendrive_road_crg.hpp \
    opendrive/map_elements/roads/railroad/opendrive_railroad_switch.hpp \
    opendrive/map_elements/roads/railroad/opendrive_railroad_maintrack.hpp \
    opendrive/map_elements/roads/railroad/opendrive_railroad_sidetrack.hpp \
    opendrive/map_elements/roads/railroad/opendrive_railroad_partner.hpp \
    opendrive/map_elements/controller/opendrive_controller.hpp \
    opendrive/map_elements/controller/opendrive_controller_control.hpp \
    opendrive/map_elements/junction/opendrive_junction.hpp \
    opendrive/map_elements/junction/connection/opendrive_junction_connection.hpp \
    opendrive/map_elements/junction/connection/opendrive_junction_connection_lanelink.hpp \
    opendrive/map_elements/junction/opendrive_junction_priority.hpp \
    opendrive/map_elements/junction/opendrive_junction_controller.hpp \
    opendrive/map_elements/junctiongroup/opendrive_junction_group.hpp \
    opendrive/map_elements/junctiongroup/opendrive_junction_group_reference.hpp \
    opendrive/map_elements/station/opendrive_station.hpp \
    opendrive/map_elements/station/platform/opendrive_station_platform.hpp \
    opendrive/map_elements/station/platform/opendrive_station_platform_segment.hpp

FORMS    += opendrive_parser.ui
