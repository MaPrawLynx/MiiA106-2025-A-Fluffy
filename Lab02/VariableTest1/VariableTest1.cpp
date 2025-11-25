#include <iostream>
#include <string>
using namespace std;

int main() {
    
    //ประกาศตัวแปร
    string name = "Nantapat Rattanagool";
    int age = 22;
    string studentID = "6811830001";
    float gpa = 2.75;

    //แสดงผลลัพธ์ออกหน้าจอ
    cout << "=========== Student Info ===========" << endl;
    cout << "Name      : " << name << endl;
    cout << "Age       : " << age << " years old" << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "GPA       : " << gpa << endl;
    cout << "===================================" << endl;

    return 0;
}
