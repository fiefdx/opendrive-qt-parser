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

 private:
  bool set_map_elements(const QXmlAttributes& atts,
                        const std::map<QString, std::function<bool(QString)>>&
                          function_map_);

  OpenDriveMap* map_; // we do not own this; do not delete it!
};

#endif // OPENDRIVEPARSEHANDLER_H
