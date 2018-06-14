#ifndef _RENTALOFFICE_H_
#define _RENTALOFFICE_H_

#include "Car.h"
#include "CarNavi.h"
#include "Impreza.h"
#include "Prius.h"

class CarRentalOffice {
 public:
  Car* arrange(int num);
};

#endif