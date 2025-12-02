#include <iostream>
#include <string>
#include <iomanip> // สำหรับจัดรูปแบบการแสดงผล (เช่น การเว้นช่องว่าง)

using namespace std;

// ฟังก์ชันหลัก (Main Function)
int main() {
    // 1. ประกาศตัวแปรสำหรับเก็บข้อมูล
    string studentID; // รหัสนักศึกษา (ตัวเลขหรือสตริง)
    string studentName; // ชื่อ-นามสกุล
    int score; // คะแนน (0-100)
    string grade; // เกรดที่ได้รับ (A, B, C, D, F)

    // 2. รับข้อมูล (Input)
    cout << "Enter student ID: ";
    // cin >> studentID; // ถ้าใช้ cin >> จะมีปัญหาถ้าชื่อมีช่องว่าง
    getline(cin, studentID); // ใช้ getline เพื่อให้รองรับรหัสที่เป็น string ได้ดีขึ้น

    cout << "Enter student name: ";
    // ต้อง clear buffer ก่อน ถ้าใช้ cin >> ในการรับข้อมูลก่อนหน้า แต่เราใช้ getline ทั้งคู่จึงไม่มีปัญหา
    getline(cin, studentName);

    cout << "Enter score: ";
    while (!(cin >> score)) {
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // 3. การตัดเกรด (Process) โดยใช้คำสั่งเงื่อนไข (if-else if-else)
    if (score >= 90 && score <= 100) {
        grade = "A";
    }
    else if (score >= 80 && score <= 89) {
        grade = "B";
    }
    else if (score >= 70 && score <= 79) {
        grade = "C";
    }
    else if (score >= 60 && score <= 69) {
        grade = "D";
    }
    else if (score >= 0 && score < 60) {
        grade = "F";
    }
    else {
        // กรณีคะแนนอยู่นอกช่วง 0-100
        grade = "N/A (Invalid Score)";
    }

    // 4. แสดงผลลัพธ์ (Output)
    cout << "\n";
    cout << "------ Student Report ------\n";

    // ใช้ setw() จาก <iomanip> เพื่อช่วยจัดรูปแบบให้ตรงกันสวยงาม
    // left/right ใช้กำหนดทิศทางในการจัดวางข้อความในช่องว่างที่กำหนดโดย setw()
    cout << left << setw(15) << "Student ID" << ": " << studentID << endl;
    cout << left << setw(15) << "Name" << ": " << studentName << endl;
    cout << endl;
    cout << left << setw(15) << "Score" << ": " << score << endl;
    cout << left << setw(15) << "Grade" << ": " << grade << endl;
    cout << "----------------------------\n";

    return 0;
}