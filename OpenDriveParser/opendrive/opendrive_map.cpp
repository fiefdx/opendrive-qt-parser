// C++ includes
#include <cstddef>

// Qt includes
#include <QDebug>

// Project includes
#include "opendrive_map.hpp"

OpenDriveMap::OpenDriveMap() {

}

OpenDriveMap::~OpenDriveMap() {
  if (header_) delete header_;
  for (size_t i = 0; i < roads_.size();) delete roads_[i++];
}

void OpenDriveMap::print_map() {
  qDebug() << "Map contents:\n";

  if (header_) {
    qDebug() << "Header:\n"
             << " Map name:" << header_->get_map_name() << "\n"
             << " Map create date:" << header_->get_create_date() << "\n"
             << " Max inertial y:" << header_->get_max_inertial_y() << "\n";
  }

  if (roads_.size()) {
    qDebug() << "Roads:" << roads_.size();
  }
}
