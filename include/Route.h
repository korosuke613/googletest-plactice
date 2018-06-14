#ifndef _ROUTE_H_
#define _ROUTE_H_

#include <string>
#include <vector>

class Route {
 private:
  std::vector<std::string> locate_list;

 public:
  std::vector<std::string> get_route();
  void add_route(std::string locate);
  void delete_root();
};

#endif