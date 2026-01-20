#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string id;
    string nickname;
    string lineId;
    string phone;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Nickname: ";
        cin >> nickname;
        cout << "Enter Line ID: ";
        cin >> lineId;
        cout << "Enter Phone: ";
        cin >> phone;
    }

    void print() {
        cout << "ID: " << id << endl;
        cout << "Nickname: " << nickname << endl;
        cout << "Line ID: " << lineId << endl;
        cout << "Phone: " << phone << endl;
    }
};


void swapStudent(Student& a, Student& b) {
    Student temp = a;
    a = b;
    b = temp;
}

void sortByID(Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {

        for (int j = 0; j < size - i - 1; j++) {
            
            if (students[j].id > students[j + 1].id) {
                swapStudent(students[j], students[j + 1]);
            }
        }
    }
}

// ฟังก์ชันแสดงผลข้อมูลทั้งหมด
void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        students[i].print();
        cout << "------------------" << endl;
    }
}

int main() {
    const int SIZE = 5;
    Student students[SIZE];

    // รับข้อมูลนักศึกษา 5 คน
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===" << endl;
        students[i].input();
        cout << endl;
    }

    // เรียกฟังก์ชันเรียงลำดับ
    sortByID(students, SIZE);

    // แสดงผลหลังจากเรียงเสร็จ
    cout << "\n===== Student List (Sorted by ID) =====" << endl;
    printStudents(students, SIZE);

    return 0;
}