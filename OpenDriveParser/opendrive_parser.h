#ifndef OPENDRIVE_PARSER_H
#define OPENDRIVE_PARSER_H

#include <QMainWindow>

namespace Ui {
class OpenDriveParser;
}

class OpenDriveParser : public QMainWindow
{
  Q_OBJECT

public:
  explicit OpenDriveParser(QWidget *parent = 0);
  ~OpenDriveParser();

private:
  Ui::OpenDriveParser *ui;
};

#endif // OPENDRIVE_PARSER_H
