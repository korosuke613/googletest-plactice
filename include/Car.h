#ifndef _CAR_H_
#define _CAR_H_

#include <string>
#include <vector>
#include "CarNavi.h"

class Car {
 protected:
  CarNavi* carNavi;
  std::string current_position;

 public:
  Car() { carNavi = new CarNavi; };
  virtual std::vector<std::string> dicide_root(std::string destination) = 0;
  virtual void accele_brake_pedal() = 0;
  virtual void press_brake_pedal() = 0;
  virtual void turn_steering_wheel() = 0;
};

#endif