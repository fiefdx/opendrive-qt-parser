#ifndef OPENDRIVE_PARSER_H
#define OPENDRIVE_PARSER_H

// Qt includes
#include <QFile>
#include <QMainWindow>

// Project includes
#include "opendrive/opendrive_map.hpp"

namespace Ui {
class OpenDriveParser;
}

class OpenDriveParser : public QMainWindow
{
  Q_OBJECT

public:
  explicit OpenDriveParser(QWidget* parent = nullptr);
  OpenDriveParser(QString od_map, QWidget* parent = nullptr);
  ~OpenDriveParser();

  void set_map_file(QString map_file);
  bool parse_map_file(OpenDriveMap* map);

private:
  Ui::OpenDriveParser *ui;
  QFile* opendrive_map_file_ = nullptr;
};

#endif // OPENDRIVE_PARSER_H
