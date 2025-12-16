#include <iostream>
using namespace std;

int main() {
    int i;

    //  ส่วนที่ 1: ใช้ For Loop 
    cout << "1. For Loop Result:" << endl;
    for (i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << "\n----------------\n";

    //  ส่วนที่ 2: ใช้ While Loop 
    cout << "2. While Loop Result:" << endl;
    i = 1; // ต้องกำหนดค่าเริ่มต้นใหม่ก่อนเริ่มลูป
    while (i <= 10) {
        cout << i << " ";
        i++; // เพิ่มค่า i ทีละ 1
    }
    cout << "\n----------------\n";

    //  ส่วนที่ 3: ใช้ Do-While Loop 
    cout << "3. Do-While Loop Result:" << endl;
    i = 1; // กำหนดค่าเริ่มต้นใหม่อีกครั้ง
    do {
        cout << i << " ";
        i++;
    } while (i <= 10);
    cout << "\n----------------\n";

    return 0;
}