#include "Route.h"
#include <vector>
#include <string>

std::vector<std::string> Route::get_route() { return locate_list; }

void Route::add_route(std::string locate) { locate_list.push_back(locate); }