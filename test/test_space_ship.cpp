#include <space_ship.h>
#include "bandit/bandit.h"

using namespace std;
using namespace bandit;
using namespace space_fleet;

go_bandit([](){
  describe("SpaceShip", [](){

    SpaceShip space_ship;

    before_each([&](){
      space_ship = SpaceShip();
    });

    it("starts without name and destination", [&](){
      AssertThat(space_ship.name(), Equals(""));
      AssertThat(space_ship.destination(), Equals(""));
    });

    describe(".name", [&](){
      it("returns current ship name", [&](){
        space_ship.set_name("Unfortunate Conflict Of Evidence");
        AssertThat(space_ship.name(), Equals("Unfortunate Conflict Of Evidence"));
      });

      it("can rename ship", [&](){
        space_ship.set_name("Unfortunate Conflict Of Evidence");
        AssertThat(space_ship.name(), Equals("Unfortunate Conflict Of Evidence"));
      });
    });

    describe(".fly", [&](){
      it("sets flight destination", [&](){
        space_ship.fly("Alpha Centaury");
        AssertThat(space_ship.destination(), Equals("Alpha Centaury"));
      });

      it("start ship flight", [&](){
        space_ship.fly("Alpha Centaury");
        AssertThat(space_ship.is_flying(), Equals(true));
      });
    });

  });

});
