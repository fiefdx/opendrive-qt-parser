#ifndef OPENDRIVEROADLINKSUCCESSOR_HPP
#define OPENDRIVEROADLINKSUCCESSOR_HPP

// C++ includes
#include <functional>
#include <map>

// Qt includes
#include <QString>

// Project includes
#include "opendrive/opendrive_parse_util.hpp"

class OpenDriveRoadLinkSuccessor {
public:
  OpenDriveRoadLinkSuccessor();

  QString get_element_type()  { return element_type_; }
  QString get_element_id()    { return element_id_; }
  QString get_contact_point() { return contact_point_; }

  std::map<QString, std::function<bool(QString)>> function_map_ = {
    {"elementType", std::bind(&OpenDriveParseUtil::set_parsed_value<QString>,
                              std::placeholders::_1, std::ref(element_type_))},
    {"elementId", std::bind(&OpenDriveParseUtil::set_parsed_value<QString>,
                            std::placeholders::_1, std::ref(element_id_))},
    {"contactPoint", std::bind(&OpenDriveParseUtil::set_parsed_value<QString>,
                               std::placeholders::_1, std::ref(contact_point_))}
  };

 private:
  QString element_type_;
  QString element_id_;
  QString contact_point_;
};

#endif // OPENDRIVEROADLINKSUCCESSOR_HPP
