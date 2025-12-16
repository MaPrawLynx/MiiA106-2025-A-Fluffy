#include <iostream>
#include <cstdlib> // สำหรับ rand() และ srand()
#include <ctime>   // สำหรับ time()
using namespace std;

int main() {
    // 1. ตั้งค่า Seed สำหรับการสุ่ม (เพื่อให้เลขไม่ซ้ำเดิมทุกรอบ)
    srand(time(0));

    // 2. สุ่มเลข 1-100
    int secretNum = rand() % 100 + 1;
    int guess;

    cout << "--- Guess the Number Game (1-100) ---" << endl;
    // 3. วนลูปให้ทายไปเรื่อยๆ จนกว่าจะถูก
    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNum) {
            cout << "Too High! Try again." << endl;
        }
        else if (guess < secretNum) {
            cout << "Too Low! Try again." << endl;
        }
        else {
            cout << "Correct! The number was " << secretNum << "." << endl;
        }

    } while (guess != secretNum); // ถ้าทายยังไม่ถูก ให้วนกลับไปถามใหม่

    return 0;
}