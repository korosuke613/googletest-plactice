#include "CarRentalOffice.h"
#include "Prius.h"
#include "Impreza.h"
#include "gtest/gtest.h"

#include <string>
#include <vector>
#include <iostream>

TEST(CarRentalOfficeTest, ArrangeTestPrius) {
  CarRentalOffice carRentalOffice;
  auto car = carRentalOffice.arrange(1);
  ASSERT_EQ(typeid(*car), typeid(Prius));
}

TEST(CarRentalOfficeTest, ArrangeTestImpreza) {
  CarRentalOffice carRentalOffice;
  auto car = carRentalOffice.arrange(2);
  ASSERT_EQ(typeid(*car), typeid(Impreza));
}



