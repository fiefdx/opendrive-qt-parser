#ifndef OPENDRIVEPARSEUTIL_HPP
#define OPENDRIVEPARSEUTIL_HPP

#include <QString>

class OpenDriveParseUtil {
public:
  OpenDriveParseUtil();

  template<typename T>
  static bool set_parsed_value(const QString& value, T& recipient) {
    Q_UNUSED(value);
    Q_UNUSED(recipient);
    return false;  // unsupported type
  }
};

#endif // OPENDRIVEPARSEUTIL_HPP
