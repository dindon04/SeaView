#include "seaView.cpp"
#include <gtest/gtest.h>
#include <vector>

TEST(SeaSide, Test)
{
std::vector <int> houses1 = {1,3,2,4};
std::vector <int> result1 = {3};

std::vector <int> houses2 = {4,3,2,1};
std::vector <int> result2 = {0,1,2,3};

std::vector <int> houses3 = {5,6,3,8,1};
std::vector <int> result3 = {3,4};


ASSERT_EQ(result1,seaView(houses1));
ASSERT_EQ(result2,seaView(houses2));
ASSERT_EQ(result3,seaView(houses3));
}

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}