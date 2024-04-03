#include "pch.h"
#include <gtest/gtest.h>
#include <string>
#include "speeding_fine.h"

// Test case group 1: Test cases covering all uses of the variable "vehicle"
TEST(SpeedingFineTest, VehicleAllUses) {
    EXPECT_EQ(speeding_fine(1, 120), "Muc phat tien: Tu 10.000.000 VND den 12.000.000 VND");
    EXPECT_EQ(speeding_fine(2, 100), "Muc phat tien: Tu 4.000.000 VND den 5.000.000 VND");
}

// Test case group 2: Test cases covering all uses of the variable "speed"
TEST(SpeedingFineTest, SpeedAllUses) {
    EXPECT_EQ(speeding_fine(1, 120), "Muc phat tien: Tu 10.000.000 VND den 12.000.000 VND");
}

// Test case group 3: Test cases covering all uses of the variable "tmp"
TEST(SpeedingFineTest, TmpAllUses) {
    EXPECT_EQ(speeding_fine(1, 120), "Muc phat tien: Tu 10.000.000 VND den 12.000.000 VND");
    EXPECT_EQ(speeding_fine(1, 100), "Muc phat tien: Tu 6.000.000 VND den 8.000.000 VND");
    EXPECT_EQ(speeding_fine(1, 85), "Muc phat tien: Tu 4.000.000 VND den 6.000.000 VND");
    EXPECT_EQ(speeding_fine(1, 80), "Muc phat tien: Tu 800.000 VND den 1.000.000 VND");
    EXPECT_EQ(speeding_fine(2, 100), "Muc phat tien: Tu 4.000.000 VND den 5.000.000 VND");
    EXPECT_EQ(speeding_fine(2, 85), "Muc phat tien: Tu 800.000 VND den 1.000.000 VND");
    EXPECT_EQ(speeding_fine(2, 80), "Muc phat tien: Tu 300.000 VND den 400.000 VND");
}

// Test case group 4: Test cases covering all uses of the variable "fine"
TEST(SpeedingFineTest, FineAllUses) {
    EXPECT_EQ(speeding_fine(1, 120), "Muc phat tien: Tu 10.000.000 VND den 12.000.000 VND");
    EXPECT_EQ(speeding_fine(1, 100), "Muc phat tien: Tu 6.000.000 VND den 8.000.000 VND");
    EXPECT_EQ(speeding_fine(1, 85), "Muc phat tien: Tu 4.000.000 VND den 6.000.000 VND");
    EXPECT_EQ(speeding_fine(1, 80), "Muc phat tien: Tu 800.000 VND den 1.000.000 VND");
    EXPECT_EQ(speeding_fine(1, 70), "Khong bi phat");
    EXPECT_EQ(speeding_fine(2, 100), "Muc phat tien: Tu 4.000.000 VND den 5.000.000 VND");
    EXPECT_EQ(speeding_fine(2, 85), "Muc phat tien: Tu 800.000 VND den 1.000.000 VND");
    EXPECT_EQ(speeding_fine(2, 80), "Muc phat tien: Tu 300.000 VND den 400.000 VND");
    EXPECT_EQ(speeding_fine(0, 0), "Loai phuong tien khong hop le");
}

