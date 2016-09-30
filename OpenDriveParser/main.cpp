#include "opendrive_parser.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  OpenDriveParser w;
  w.show();

  return a.exec();
}
