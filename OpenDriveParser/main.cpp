#include "opendrive_parser.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  QString test_map = "";

  OpenDriveParser odp(test_map);
  odp.show();

  odp.set_map_file(test_map);
  odp.parse_map_file(nullptr);

  return a.exec();
}
