#ifndef OPENDRIVEPARSEHANDLER_H
#define OPENDRIVEPARSEHANDLER_H

// C++ includes
#include <stack>

// Qt includes
#include <QString>
#include <QXmlDefaultHandler>

// Project includes
#include "opendrive/opendrive_map.hpp"
#include "opendrive/map_elements/roads/opendrive_road.hpp"

class OpenDriveMap;

class OpenDriveParseHandler : public QXmlDefaultHandler {
 public:
  OpenDriveParseHandler(OpenDriveMap* map);

  bool startElement(const QString& namespaceURI, const QString& localName,
                    const QString& qName, const QXmlAttributes& atts) override;
  bool endElement(const QString& namespaceURI, const QString& localName,
                  const QString& qName) override;

 private:
  bool set_map_elements(const QXmlAttributes& atts,
                        const std::map<QString, std::function<bool(QString)>>&
                          function_map_);
  OpenDriveRoad* get_last_added_road();

  // we do not own the pointees below; do not delete them!
  OpenDriveMap* map_;
  std::stack<OpenDriveMapElement*> last_link_parent_;
  std::stack<OpenDriveMapElement*> last_link_;
  std::stack<OpenDriveMapElement*> last_speed_parent_;
  std::stack<OpenDriveMapElement*> last_lane_parent_;
  std::stack<OpenDriveMapElement*> last_validity_parent_;
  std::stack<OpenDriveMapElement*> last_controller_parent_;
  // we do not own the pointees above; do not delete them!
};

#endif // OPENDRIVEPARSEHANDLER_H
