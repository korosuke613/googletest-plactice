#ifndef _CARNAVI_H_
#define _CARNAVI_H_

#include <string>
#include <vector>
#include "Route.h"

class CarNavi {
 private:
  std::string current_place;
  Route route;

 public:
  CarNavi() {
    route.add_route("木花");
    route.add_route("清武");
    route.add_route("南宮崎");
    route.add_route("宮崎");
  };
  std::vector<std::string> search_root(std::string current_position,
                                       std::string destination);
};

#endif
