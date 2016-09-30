#ifndef OPENDRIVEPARSEHANDLER_H
#define OPENDRIVEPARSEHANDLER_H

// Qt includes
#include <QString>
#include <QXmlDefaultHandler>

// Project includes
#include "opendrive/opendrive_map.hpp"

class OpenDriveMap;

class OpenDriveParseHandler : public QXmlDefaultHandler {
 public:
  OpenDriveParseHandler(OpenDriveMap* map);

  bool startElement(const QString &namespaceURI, const QString &localName,
                    const QString &qName, const QXmlAttributes &atts) override;

  template<typename T>
  static bool set_assigned_value(QString value, T& recipient) {
    Q_UNUSED(value);
    Q_UNUSED(recipient);
    return false;  // unsupported type
  }

 private:
  OpenDriveMap* map_; // we do not own this; do not delete it!
};

#endif // OPENDRIVEPARSEHANDLER_H
