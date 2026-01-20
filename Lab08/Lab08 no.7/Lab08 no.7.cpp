#include <iostream>
#include <string>
using namespace std;

struct Phone {
    string mobile;
    string home;
};

struct Parent {
    string name;
    string relationship;
    Phone contact;      
};

struct Student {
    string id;
    string nickname;
    string lineId;
    Phone myContact;    
    Parent myParent;  
};

int main() {
    Student s1;

    cout << "=== Input Student Data ===\n";

    cout << "Student ID: ";       cin >> s1.id;
    cout << "Nickname: ";         cin >> s1.nickname;
    cout << "Line ID: ";          cin >> s1.lineId;

    cout << "Student Mobile: ";   cin >> s1.myContact.mobile;
    cout << "Student Home: ";     cin >> s1.myContact.home;

    cout << "\n=== Input Parent Data ===\n";
    
    cout << "Parent Name: ";      cin >> s1.myParent.name;
    cout << "Relationship: ";     cin >> s1.myParent.relationship;

   
    cout << "Parent Mobile: ";    cin >> s1.myParent.contact.mobile;
    cout << "Parent Home: ";      cin >> s1.myParent.contact.home;


  //แสดง
    cout << "\n====================================\n";
    cout << "          STUDENT PROFILE           \n";
    cout << "====================================\n";
    cout << "ID: " << s1.id << " (" << s1.nickname << ")\n";
    cout << "Line: " << s1.lineId << "\n";
    cout << "Contact: " << s1.myContact.mobile << " (Home: " << s1.myContact.home << ")\n";

    cout << "------------------------------------\n";
    cout << "Parent: " << s1.myParent.name << " (" << s1.myParent.relationship << ")\n";

 
    cout << "Parent Contact: " << s1.myParent.contact.mobile << "\n";
    cout << "Parent Home: " << s1.myParent.contact.home << "\n";

    return 0;
}