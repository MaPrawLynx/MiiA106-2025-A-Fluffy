#include <iostream>

using namespace std;

//(1.) Function Prototypes

void swapValue(int a, int b);          // แบบ Pass by Value (ส่งค่าสำเนา)
void swapReference(int& a, int& b);    // แบบ Pass by Reference (ส่งตัวจริง)

int main() {
    int num1, num2;

    // รับค่าตัวเลข 2 ตัว
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    cout << "-----------------------" << endl;
    // แสดงค่าเริ่มต้น
    cout << "Before swap: a = " << num1 << ", b = " << num2 << endl;

    // 1. ลองสลับด้วย Pass by Value
    swapValue(num1, num2);
    // ค่าจะไม่เปลี่ยน เพราะฟังก์ชันสลับแค่ "ตัวสำเนา" ข้างใน
    cout << "After swap (Call by Value): a = " << num1 << ", b = " << num2 << endl;

    // 2. ลองสลับด้วย Pass by Reference
    swapReference(num1, num2);
    // ค่าจะเปลี่ยนจริง! เพราะเราส่ง "ที่อยู่" ของตัวแปรไปให้ฟังก์ชันจัดการเลย
    cout << "After swap (Call by Reference): a = " << num1 << ", b = " << num2 << endl;

    return 0;
}

//(2.) Function Definitions

// แบบ Call by Value: สลับแค่ในนี้ ออกไปข้างนอกก็เหมือนเดิม
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// แบบ Call by Reference: มีเครื่องหมาย & หน้าชื่อตัวแปร
// การเปลี่ยนแปลงในนี้ จะกระทบตัวแปรจริงที่ main ด้วย
void swapReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}