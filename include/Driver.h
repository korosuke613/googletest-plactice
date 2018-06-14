#ifndef _DRIVER_H_
#define _DRIVER_H_

#include <string>
#include "Car.h"
#include "CarRentalOffice.h"

class Driver{
    private:
     Car* car;
     CarRentalOffice office;

    public:
     void rental_car(int num) { car = office.arrange(num); }
     void move(std::string destination) { car->accele_brake_pedal(); }
};

#endif