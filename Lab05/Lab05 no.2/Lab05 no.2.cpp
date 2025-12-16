#include <iostream>

using namespace std;

//(1.) Function Prototype
int maxOfThree(int a, int b, int c);

int main() {
    int num1, num2, num3;

    // รับค่าตัวเลข 3 ตัวจากแป้นพิมพ์
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;

    // เรียกฟังก์ชันเพื่อหาค่ามากที่สุด
    int maxVal = maxOfThree(num1, num2, num3);

    // แสดงผลลัพธ์ตามแบบในใบงาน
    cout << "Maximum value is: " << maxVal << endl;

    return 0;
}

//(2.) Function Definition
int maxOfThree(int a, int b, int c) {
    
    int max = a;

    
    if (b > max) {
        max = b;
    }

    
    if (c > max) {
        max = c;
    }

    
    return max;
}