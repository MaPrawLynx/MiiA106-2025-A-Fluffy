#include <iostream>
#include <cmath>

using namespace std;


double circleArea(double radius);
double rectArea(double width, double height);

int main() {
    double r, w, h;

   
    cout << "Enter radius: ";
    cin >> r;

   
    cout << "Enter width: ";
    cin >> w;
    cout << "Enter height: ";
    cin >> h;

    cout << "-----------------------" << endl;

    
    cout << "Circle Area = " << circleArea(r) << endl;
    cout << "Rectangle Area = " << rectArea(w, h) << endl;

    return 0;
}



double circleArea(double radius) {
    const double PI = 3.14159;
    return PI * pow(radius, 2);
}

double rectArea(double width, double height) {
    return width * height;
}