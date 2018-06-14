#include "CarRentalOffice.h"

Car* CarRentalOffice::arrange(int num) {
  Car *car;
  switch (num) {
    case 1:
      car = new Prius;
      break;
    case 2:
      car = new Impreza;
      break;
  };
  return car;
}