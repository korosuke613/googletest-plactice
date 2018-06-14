#include "CarNavi.h"
#include "gtest/gtest.h"

#include <string>
#include <vector>

TEST(CarNaviTest, SearchRootTest) {
  CarNavi carNavi;
  std::vector<std::string> roots = carNavi.search_root("木花", "南宮崎");
  ASSERT_EQ(roots.at(0), "木花");
  ASSERT_EQ(roots.at(1), "清武");
  ASSERT_EQ(roots.at(2), "南宮崎");
}

TEST(CarNaviTest, SearchRootReverseTest) {
  CarNavi carNavi;
  std::vector<std::string> roots = carNavi.search_root("宮崎", "木花");
  ASSERT_EQ(roots.at(0), "宮崎");
  ASSERT_EQ(roots.at(1), "南宮崎");
  ASSERT_EQ(roots.at(2), "清武");
  ASSERT_EQ(roots.at(3), "木花");
}