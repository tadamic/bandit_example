#include "space_ship.h"

using namespace std;

namespace space_fleet {

SpaceShip::SpaceShip() :
  m_is_flying(false)
{}

SpaceShip::~SpaceShip() {}

bool SpaceShip::operator==(const SpaceShip& rv) const {
  return m_name == rv.name();
}

bool SpaceShip::operator!=(const SpaceShip& rv) const {
  return !(*this == rv);
}

const string& SpaceShip::name() const {
  return m_name;
}

void SpaceShip::set_name(const string& new_name) {
  m_name = new_name;
}

void SpaceShip::fly(const string& destination) {
  m_destination = destination;
  m_is_flying = true;
}

const string& SpaceShip::destination() const {
  return m_destination;
}

bool SpaceShip::is_flying() const {
  return m_is_flying;
}

} // namespace space_fleet
