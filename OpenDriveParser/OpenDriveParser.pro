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
    opendrive/opendrive_parse_util.cpp

HEADERS  += \
    opendrive_parser.hpp \
    opendrive/opendrive_parse_handler.hpp \
    opendrive/map_elements/opendrive_map_header.hpp \
    opendrive/opendrive_map.hpp \
    opendrive/opendrive_parse_util.hpp

FORMS    += opendrive_parser.ui
