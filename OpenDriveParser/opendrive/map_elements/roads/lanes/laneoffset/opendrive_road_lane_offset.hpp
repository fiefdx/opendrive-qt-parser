#ifndef OPENDRIVEROADLANEOFFSET_HPP
#define OPENDRIVEROADLANEOFFSET_HPP

// C++ includes
#include <functional>
#include <map>

// Qt includes
#include <QString>

// Project includes
#include "opendrive/opendrive_parse_util.hpp"

class OpenDriveRoadLaneOffset {
 public:
  OpenDriveRoadLaneOffset();

  double get_s() { return s_; }
  double get_a() { return a_; }
  double get_b() { return b_; }
  double get_c() { return c_; }
  double get_d() { return d_; }

  std::map<QString, std::function<bool(QString)>> function_map_ = {
    {"s", std::bind(&OpenDriveParseUtil::set_parsed_value<double>,
                    std::placeholders::_1, std::ref(s_))},
    {"a", std::bind(&OpenDriveParseUtil::set_parsed_value<double>,
                    std::placeholders::_1, std::ref(a_))},
    {"b", std::bind(&OpenDriveParseUtil::set_parsed_value<double>,
                    std::placeholders::_1, std::ref(b_))},
    {"c", std::bind(&OpenDriveParseUtil::set_parsed_value<double>,
                    std::placeholders::_1, std::ref(c_))},
    {"d", std::bind(&OpenDriveParseUtil::set_parsed_value<double>,
                    std::placeholders::_1, std::ref(d_))}
  };

 private:
  double s_;
  double a_;
  double b_;
  double c_;
  double d_;
};

#endif // OPENDRIVEROADLANEOFFSET_HPP
