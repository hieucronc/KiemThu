#include "pch.h"
#include <iostream>
#include <string>
#include "speeding_fine.h"

using namespace std;

const float max_speed = 70.0;

string speeding_fine(int vehicle, float speed) {
    string fine = "";
    float tmp = speed - max_speed;
    if (vehicle == 1) { // Ô tô
        if (tmp > 35) {
            fine = "Muc phat tien: Tu 10.000.000 VND den 12.000.000 VND";
        }
        else if (tmp > 20) {
            fine = "Muc phat tien: Tu 6.000.000 VND den 8.000.000 VND";
        }
        else if (tmp > 10) {
            fine = "Muc phat tien: Tu 4.000.000 VND den 6.000.000 VND";
        }
        else if (tmp > 5) {
            fine = "Muc phat tien: Tu 800.000 VND den 1.000.000 VND";
        }
        else {
            fine = "Khong bi phat";
        }
    }
    else if (vehicle == 2) { // Xe máy
        if (tmp > 20) {
            fine = "Muc phat tien: Tu 4.000.000 VND den 5.000.000 VND";
        }
        else if (tmp > 10) {
            fine = "Muc phat tien: Tu 800.000 VND den 1.000.000 VND";
        }
        else if (tmp > 5) {
            fine = "Muc phat tien: Tu 300.000 VND den 400.000 VND";

        }
        else {
            fine = "Khong bi phat";
        }
    }
    else {
        fine = "Loai phuong tien khong hop le";
    }

    return fine;
}
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    int vehicle;
    float speed;
    
    // Nhập vào loại phương tiện và tốc độ
    cout << "Nhap vao loai phuong tien (1 - o to, 2 - xe may): ";
    cin >> vehicle;
    while (true) {
        cout << "Nhap vao toc do (khong am) (km/h): ";
        cin >> speed;
        if (!(speed < 0)) {
            break;
        }
        else {
            cout << "Toc do khong duoc nho hon 0. Vui long nhap lai." << endl;
        }
    }
    cout << speeding_fine(vehicle, speed);

    return 0;
}

