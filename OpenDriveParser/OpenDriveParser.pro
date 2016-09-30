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
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane.cpp

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
    opendrive/map_elements/roads/lanes/lane/opendrive_road_lane.hpp

FORMS    += opendrive_parser.ui
