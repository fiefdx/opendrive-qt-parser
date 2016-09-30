
// Qt includes
#include <QDebug>
#include <QString>

// Project includes
#include "opendrive_parse_handler.hpp"
#include "opendrive/opendrive_map.hpp"

OpenDriveParseHandler::OpenDriveParseHandler(OpenDriveMap* map) :
  map_(map) {

}

bool OpenDriveParseHandler::startElement(const QString &namespaceURI,
                                         const QString &localName,
                                         const QString &qName,
                                         const QXmlAttributes &atts) {
  Q_UNUSED(localName);
  Q_UNUSED(namespaceURI);

  qDebug() << "Element name:" << qName;

  for (int i = 0; i < atts.length(); i++) {
    qDebug() << "  attribute" << atts.qName(i) << "has value" << atts.value(i);
  }

  return true;
}

template<>
bool OpenDriveParseHandler::set_assigned_value<QString>(QString value,
                                                        QString& recipient) {
  recipient = value;
  return true;
}

template<>
bool OpenDriveParseHandler::set_assigned_value<float>(QString value,
                                                      float& recipient) {
  bool conversion_ok;
  recipient = value.toFloat(&conversion_ok);
  return conversion_ok;
}

template<>
bool OpenDriveParseHandler::set_assigned_value<double>(QString value,
                                                       double& recipient) {
  bool conversion_ok;
  recipient = value.toDouble(&conversion_ok);
  return conversion_ok;
}

template<>
bool OpenDriveParseHandler::set_assigned_value<unsigned int>(QString value,
                                                             unsigned int& recipient) {
  bool conversion_ok;
  recipient = value.toUInt(&conversion_ok);
  return conversion_ok;
}

template<>
bool OpenDriveParseHandler::set_assigned_value<short>(QString value,
                                                      short& recipient) {
  bool conversion_ok;
  recipient = value.toShort(&conversion_ok);
  return conversion_ok;
}

template<>
bool OpenDriveParseHandler::set_assigned_value<unsigned short>(QString value,
                                                               unsigned short& recipient) {
  bool conversion_ok;
  recipient = value.toUShort(&conversion_ok);
  return conversion_ok;
}
