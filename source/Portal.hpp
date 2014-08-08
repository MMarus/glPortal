#ifndef PORTAL_HPP
#define PORTAL_HPP

#include "engine/Entity.hpp"
#include "engine/util/Vector3f.hpp"

namespace glPortal {
class BoxCollider;

class Portal: public Entity {
public:
  static const int PORTAL_RANGE;
  static const Vector3f BLUE_COLOR;
  static const Vector3f ORANGE_COLOR;

  Portal() :
      open(false) {}
  Vector3f direction;
  bool open;

  Vector3f getDirection();
  bool throughPortal(Vector3f v);
  bool inPortal(BoxCollider collider);
};

} /* namespace glPortal */

#endif /* PORTAL_HPP */
