#include "opendrive_parser.h"
#include "ui_opendrive_parser.h"

OpenDriveParser::OpenDriveParser(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::OpenDriveParser)
{
  ui->setupUi(this);
}

OpenDriveParser::~OpenDriveParser()
{
  delete ui;
}
