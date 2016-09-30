#ifndef OPENDRIVEMAPHEADER_HPP
#define OPENDRIVEMAPHEADER_HPP

// C++ includes
#include <functional>
#include <map>

// Qt includes
#include <QString>

// Project includes
#include "opendrive/opendrive_parse_handler.hpp"

class OpenDriveMapHeader {
 public:
  OpenDriveMapHeader();

//  std::map<QString, std::function<bool(QString)>> function_map_ = {
//    {"revMajor", std::bind(&OpenDriveParseHandler::set_assigned_value<unsigned int>,
//                           std::placeholders::_1, std::ref(rev_major_))}
//  };

 private:
  unsigned short rev_major_;
  unsigned short rev_minor_;
  QString map_name_;
  float map_version_;
  QString create_date_;
  double max_inertial_y_;
  double min_inertial_y_;
  double max_inertial_x_;
  double min_inertial_x_;
  QString vendor_;
};

#endif // OPENDRIVEMAPHEADER_HPP
