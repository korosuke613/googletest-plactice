#include "Route.h"
#include "gtest/gtest.h"

#include <vector>
#include <string>

TEST(RouteTest, AddRootTest) {
  Route route;
  route.add_route("木花");
  std::vector<std::string> routes = route.get_route();
  ASSERT_EQ(routes.at(0), "木花" );
}
