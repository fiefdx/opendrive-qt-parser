// Qt includes
#include <QDebug>
#include <QXmlInputSource>
#include <QXmlSimpleReader>

// Project includes
#include "opendrive_parser.hpp"
#include "opendrive/opendrive_parse_handler.hpp"
#include "ui_opendrive_parser.h"

OpenDriveParser::OpenDriveParser(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::OpenDriveParser) {
  ui->setupUi(this);
}

OpenDriveParser::OpenDriveParser(QString od_map, QWidget *parent) :
  QMainWindow(parent), ui(new Ui::OpenDriveParser) {
  ui->setupUi(this);

  opendrive_map_file_ = new QFile(od_map);
}

OpenDriveParser::~OpenDriveParser() {
  if (opendrive_map_file_) delete opendrive_map_file_;
  delete ui;
}

void OpenDriveParser::set_map_file(QString map_file) {
  if (opendrive_map_file_) delete opendrive_map_file_;
  opendrive_map_file_ = new QFile(map_file);
}

bool OpenDriveParser::parse_map_file(OpenDriveMap* map) {
  QXmlSimpleReader xml_reader;
  QXmlInputSource* input_source = new QXmlInputSource(opendrive_map_file_);
  OpenDriveParseHandler* parse_handler = new OpenDriveParseHandler(map);
  xml_reader.setContentHandler(parse_handler);
  xml_reader.setErrorHandler(parse_handler);

  bool parse_ok = xml_reader.parse(input_source);

  if (!parse_ok) { qDebug() << "[PARSER] Parse failed!"; }
  else {           qDebug() << "[PARSER] Parse succeeded!"; }

  return parse_ok;
}
