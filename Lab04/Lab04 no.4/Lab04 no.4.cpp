#include <iostream>
using namespace std;

int main() {
    int num = 1; // เลขท้าย 2 ตัวของรหัส 6811830001 คือ 01

    cout << "Multiplication Table of " << num << ":" << endl;
    cout << "-----------------------------" << endl;

    for (int i = 1; i <= 12; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }

    cout << "-----------------------------" << endl;
    return 0;
}