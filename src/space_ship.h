
#ifndef SPACE_SHIP_B6235B1F_F23E_427A_916C_BD012A75707A
#define SPACE_SHIP_B6235B1F_F23E_427A_916C_BD012A75707A

#include <string>

namespace space_fleet {

class SpaceShip {
public:
  SpaceShip();
  virtual ~SpaceShip();

  bool operator== (const SpaceShip&) const;
  bool operator!= (const SpaceShip&) const;

  const std::string& name() const;
  void set_name(const std::string& new_name);

  void fly(const std::string& destination);
  const std::string& destination() const;
  void stop();

  bool is_flying() const;

private:
  std::string m_name;
  bool m_is_flying;
  std::string m_destination;
};

} // namespace space_fleet

#endif // HEADER_GUARD
