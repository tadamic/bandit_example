#include <iostream>
#include <space_ship.h>

using namespace std;
using namespace space_fleet;

int main() {

  SpaceShip sp;

  sp.set_name("Unfortunate Conflict Of Evidence");
  sp.fly("Alpha Centaury");

  cout << "Of we go to: " << sp.destination() << "\n";

  return 0;
}
