#include <iostream>
#include <cmath>

using namespace std;

// (1.) Function Prototypes
double circleArea(double radius);
double rectArea(double width, double height);

int main() {
    double r, w, h;

    // 1. รับค่ารัศมีวงกลม
    cout << "Enter radius: ";
    cin >> r;

    // 2. รับค่าความกว้างและความสูงสี่เหลี่ยม
    cout << "Enter width: ";
    cin >> w;
    cout << "Enter height: ";
    cin >> h;

    cout << "-----------------------" << endl;

    // 3. เรียกฟังก์ชันคำนวณและแสดงผล
    cout << "Circle Area = " << circleArea(r) << endl;
    cout << "Rectangle Area = " << rectArea(w, h) << endl;

    return 0;
}

//(2.) Function Definitions

double circleArea(double radius) {
    const double PI = 3.14159;
    return PI * pow(radius, 2);
}

double rectArea(double width, double height) {
    return width * height;
}