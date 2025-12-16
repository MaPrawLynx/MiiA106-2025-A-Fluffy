#include <iostream>
using namespace std;

int main() {
    int sum = 0; // ต้องเริ่มที่ 0 !

    // วนลูปบวกเลขตั้งแต่ 1 ถึง 100
    for (int i = 1; i <= 100; i++) {
        sum = sum + i; // หรือเขียนย่อว่า sum += i;
    }

    cout << "Sum of 1 to 100 is: " << sum << endl;

    return 0;
}