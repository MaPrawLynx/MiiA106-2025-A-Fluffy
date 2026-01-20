#include <iostream>
#include <string>
using namespace std;

struct Student {
    string studentID;
    string nickname;
};

int main() {
    Student s1;
    Student* p = nullptr;

 
    p = &s1; 

  
    p->studentID = "6811830001"; 
    p->nickname = "Nantapat";    

    
    cout << "=== Output via Pointer (->) ===" << endl;
    cout << "ID: " << p->studentID << endl;
    cout << "Nickname: " << p->nickname << endl;


    return 0;
}