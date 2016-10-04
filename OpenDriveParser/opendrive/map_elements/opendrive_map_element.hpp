#ifndef OPENDRIVEMAPELEMENT_HPP
#define OPENDRIVEMAPELEMENT_HPP

/**
 * The OpenDriveMapElement class exists to use as a base class for map
 * elements so that arbitrary map elements can be referenced with a pointer
 * of type OpenDriveMapElement and then cast accordingly.
 *
 * This is useful when parsing an element with name "validity," for example.
 * Since multiple map elements contain a "validity" child element, we can track
 * the most-recent parent of such an element so we can create and assign the
 * "validity" element to the proper parent.
 */
class OpenDriveMapElement {
 public:
  OpenDriveMapElement();
  virtual ~OpenDriveMapElement();
};

#endif // OPENDRIVEMAPELEMENT_HPP
