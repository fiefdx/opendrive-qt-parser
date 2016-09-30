#ifndef OPENDRIVEPARSEHANDLER_H
#define OPENDRIVEPARSEHANDLER_H

// Qt includes
#include <QString>
#include <QXmlDefaultHandler>

class OpenDriveParseHandler : public QXmlDefaultHandler {
 public:
  OpenDriveParseHandler();

  bool startElement(const QString &namespaceURI, const QString &localName,
                    const QString &qName, const QXmlAttributes &atts) override;

  template<typename T>
  static bool set_assigned_value(QString value, T& recipient) {
    Q_UNUSED(value);
    Q_UNUSED(recipient);
    return false;  // unsupported type
  }
};

#endif // OPENDRIVEPARSEHANDLER_H
