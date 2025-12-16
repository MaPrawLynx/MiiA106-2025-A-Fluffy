#include <iostream>
using namespace std;

int main() {
    cout << "Even numbers from 2 to 20:" << endl;

    // ใช้ For Loop เริ่มที่ 2 และบวกเพิ่มทีละ 2
    for (int i = 2; i <= 20; i += 2) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}