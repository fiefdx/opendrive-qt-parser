// Qt includes
#include <QString>

// Project includes
#include "opendrive_parse_util.hpp"

OpenDriveParseUtil::OpenDriveParseUtil() {

}

template<>
bool OpenDriveParseUtil::set_parsed_value<QString>(const QString& value,
                                                   QString& recipient) {
  recipient = value;
  return true;
}

template<>
bool OpenDriveParseUtil::set_parsed_value<float>(const QString& value,
                                                 float& recipient) {
  bool conversion_ok = true;
  recipient = value.toFloat(&conversion_ok);
  return conversion_ok;
}

template<>
bool OpenDriveParseUtil::set_parsed_value<double>(const QString& value,
                                                  double& recipient) {
  bool conversion_ok = true;
  recipient = value.toDouble(&conversion_ok);
  return conversion_ok;
}

template<>
bool OpenDriveParseUtil::set_parsed_value<unsigned int>(const QString& value,
                                                        unsigned int& recipient) {
  bool conversion_ok = true;
  recipient = value.toUInt(&conversion_ok);
  return conversion_ok;
}

template<>
bool OpenDriveParseUtil::set_parsed_value<short>(const QString& value,
                                                 short& recipient) {
  bool conversion_ok = true;
  recipient = value.toShort(&conversion_ok);
  return conversion_ok;
}

template<>
bool OpenDriveParseUtil::set_parsed_value<unsigned short>(const QString& value,
                                                          unsigned short& recipient) {
  bool conversion_ok = true;
  recipient = value.toUShort(&conversion_ok);
  return conversion_ok;
}
