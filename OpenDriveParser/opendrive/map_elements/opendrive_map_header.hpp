#ifndef OPENDRIVEMAPHEADER_HPP
#define OPENDRIVEMAPHEADER_HPP

// C++ includes
#include <functional>
#include <map>

// Qt includes
#include <QString>

// Project includes
#include "opendrive/opendrive_parse_util.hpp"

class OpenDriveMapHeader {
 public:
  OpenDriveMapHeader();

  unsigned short get_rev_major() { return rev_major_;      }
  unsigned short get_rev_minor() { return rev_minor_;      }
  QString get_map_name()         { return map_name_;       }
  float get_map_version()        { return map_version_;    }
  QString get_create_date()      { return create_date_;    }
  double get_max_inertial_y()    { return max_inertial_y_; }
  double get_min_inertial_y()    { return min_inertial_y_; }
  double get_max_inertial_x()    { return max_inertial_x_; }
  double get_min_inertial_x()    { return min_inertial_x_; }
  QString get_vendor()           { return vendor_;         }

  const std::map<QString, std::function<bool(QString)>> function_map_ = {
    {"revMajor", std::bind(&OpenDriveParseUtil::set_parsed_value<unsigned short>,
                           std::placeholders::_1, std::ref(rev_major_))},
    {"revMinor", std::bind(&OpenDriveParseUtil::set_parsed_value<unsigned short>,
                           std::placeholders::_1, std::ref(rev_minor_))},
    {"name", std::bind(&OpenDriveParseUtil::set_parsed_value<QString>,
                       std::placeholders::_1, std::ref(map_name_))},
    {"version", std::bind(&OpenDriveParseUtil::set_parsed_value<float>,
                          std::placeholders::_1, std::ref(map_version_))},
    {"date", std::bind(&OpenDriveParseUtil::set_parsed_value<QString>,
                       std::placeholders::_1, std::ref(create_date_))},
    {"north", std::bind(&OpenDriveParseUtil::set_parsed_value<double>,
                        std::placeholders::_1, std::ref(max_inertial_y_))},
    {"south", std::bind(&OpenDriveParseUtil::set_parsed_value<double>,
                        std::placeholders::_1, std::ref(min_inertial_y_))},
    {"east", std::bind(&OpenDriveParseUtil::set_parsed_value<double>,
                       std::placeholders::_1, std::ref(max_inertial_x_))},
    {"west", std::bind(&OpenDriveParseUtil::set_parsed_value<double>,
                       std::placeholders::_1, std::ref(min_inertial_x_))},
    {"vendor", std::bind(&OpenDriveParseUtil::set_parsed_value<QString>,
                         std::placeholders::_1, std::ref(vendor_))}
  };

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
