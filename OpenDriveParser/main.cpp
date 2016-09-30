// Qt includes
#include <QApplication>

// Project includes
#include "opendrive_parser.hpp"
#include "opendrive/opendrive_map.hpp"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  OpenDriveMap map;

  QString test_map = "/home/kowallt/Downloads/Crossing8Course/Crossing8CourseReduced.xodr";

  OpenDriveParser odp(test_map);
  odp.show();

  odp.set_map_file(test_map);
  odp.parse_map_file(&map);

  map.print_map();

  return a.exec();
}
