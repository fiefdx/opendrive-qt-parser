#-------------------------------------------------
#
# Project created by QtCreator 2016-09-29T19:42:09
#
#-------------------------------------------------

QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OpenDriveParser
TEMPLATE = app


SOURCES += main.cpp\
        opendrive_parser.cpp \
    opendrive/opendrive_parse_handler.cpp \
    opendrive/map_elements/opendrive_map_header.cpp \
    opendrive/opendrive_map.cpp

HEADERS  += \
    opendrive/opendrive_parse_handler.hpp \
    opendrive/map_elements/opendrive_map_header.hpp \
    opendrive_parser.hpp \
    opendrive/opendrive_map.hpp

FORMS    += opendrive_parser.ui
