#include "CarNavi.h"
#include <algorithm>
#include <iostream>

std::vector<std::string> CarNavi::search_root(std::string current_position,
                                              std::string destination) {
  auto routes = route.get_route();
  auto iter_start = std::find(routes.begin(), routes.end(), current_position);
  int start_index = std::distance(routes.begin(), iter_start);
  auto iter_end = std::find(routes.begin(), routes.end(), destination);
  int end_index = std::distance(routes.begin(), iter_end);

  std::vector<std::string> result;
  bool isOverStart = false;

  if (start_index > end_index) {
    std::swap(start_index, end_index);
    isOverStart = true;
  }

  for (auto& i = start_index; i <= end_index; i++) {
    result.push_back(routes.at(i));
  }

  if(isOverStart){
    std::reverse(result.begin(), result.end());
  }

  return result;
}