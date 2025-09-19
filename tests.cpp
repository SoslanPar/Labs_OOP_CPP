#include <gtest/gtest.h>
#include "box_capacity.h"


TEST(basic_tests, test_1) {
    EXPECT_EQ(box_capacity(32, 64, 16), 13824);
}

TEST(basic_tests, test_2) {
    EXPECT_EQ(box_capacity(33, 65, 17), 13824);
}

TEST(basic_tests, test_kratnie_4) {
    EXPECT_EQ(box_capacity(4, 4, 4), 27); 
}

TEST(min_tests, test_not_kratnie_4) {
    EXPECT_EQ(box_capacity(2, 1, 3), 0);
}

TEST(basic_tests, test_not_kratnie_4) {
    EXPECT_EQ(box_capacity(2, 4, 3), 6);
}

TEST(basic_tests, test_big_values) {
    EXPECT_EQ(box_capacity(1000, 1200, 1300), 750*900*975); // 658_125_000
}

TEST(zero_tests, test_zeros) {
    EXPECT_EQ(box_capacity(4, 0, 16), 0);
    EXPECT_EQ(box_capacity(4, 0, 0), 0);
    EXPECT_EQ(box_capacity(0, 0, 0), 0);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}