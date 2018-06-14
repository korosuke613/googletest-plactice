#ifndef _PRIUS_H_
#define _PRIUS_H_

#include <iostream>
#include "Car.h"
#include "CarNavi.h"

class Prius : public Car {
 public:
  Prius() : Car(){};
  std::vector<std::string> dicide_root(std::string destination) {
    std::cout << "現在地: " << current_position << std::endl;
    std::cout << "目的地: " << destination << std::endl;
    return carNavi->search_root(current_position, destination);
  };
  void accele_brake_pedal() {
    std::cout << "俺はプリウス。アクセルブーン" << std::endl;
  };
  void press_brake_pedal() {
    std::cout << "俺はプリウス。ブレーキキュ〜" << std::endl;
  };
  void turn_steering_wheel() {
    std::cout << "俺はプリウス。ハンドルぐわんぐわん" << std::endl;
  };
};

#endif