#ifndef OPENDRIVEROADLANELINKPREDECESSOR_HPP
#define OPENDRIVEROADLANELINKPREDECESSOR_HPP

// C++ includes
#include <functional>
#include <map>

// Qt includes
#include <QString>

// Project includes
#include "opendrive/opendrive_parse_util.hpp"

class OpenDriveRoadLaneLinkPredecessor {
 public:
  OpenDriveRoadLaneLinkPredecessor();

  int get_id() { return id_; }

  std::map<QString, std::function<bool(QString)>> function_map_ = {
    {"id", std::bind(&OpenDriveParseUtil::set_parsed_value<int>,
                     std::placeholders::_1, std::ref(id_))}
  };

 private:
  int id_;
};

#endif // OPENDRIVEROADLANELINKPREDECESSOR_HPP
