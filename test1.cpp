#include "pch.h"
#include <gtest/gtest.h>
#include <string>
#include "speeding_fine.h"

// Test case for speeding_fine function when vehicle type is invalid (0)
TEST(SpeedingFineTest, InvalidVehicleType) {
    EXPECT_EQ(speeding_fine(0, 0), "Loai phuong tien khong hop le");
}

// Test case for speeding_fine function with different speeds for car (vehicle type 1)
TEST(SpeedingFineTest, CarSpeedingFines) {
    EXPECT_EQ(speeding_fine(1, 120), "Muc phat tien: Tu 10.000.000 VND den 12.000.000 VND");
    EXPECT_EQ(speeding_fine(1, 100), "Muc phat tien: Tu 6.000.000 VND den 8.000.000 VND");
    EXPECT_EQ(speeding_fine(1, 85), "Muc phat tien: Tu 4.000.000 VND den 6.000.000 VND");
    EXPECT_EQ(speeding_fine(1, 80), "Muc phat tien: Tu 800.000 VND den 1.000.000 VND");
    EXPECT_EQ(speeding_fine(1, 70), "Khong bi phat");
}

// Test case for speeding_fine function with different speeds for motorcycle (vehicle type 2)
TEST(SpeedingFineTest, MotorcycleSpeedingFines) {
    EXPECT_EQ(speeding_fine(2, 100), "Muc phat tien: Tu 4.000.000 VND den 5.000.000 VND");
    EXPECT_EQ(speeding_fine(2, 85), "Muc phat tien: Tu 800.000 VND den 1.000.000 VND");
    EXPECT_EQ(speeding_fine(2, 80), "Muc phat tien: Tu 300.000 VND den 400.000 VND");
    EXPECT_EQ(speeding_fine(2, 70), "Khong bi phat");
}

//int main(int argc, char** argv) {
//    ::testing::InitGoogleTest(&argc, argv);
//    return RUN_ALL_TESTS();
//}