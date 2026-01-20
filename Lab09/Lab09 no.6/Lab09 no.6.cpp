#include <iostream>
#include <string>
using namespace std;
class Student
	// Student
{
public: // TODO
	string id;
	string nickname;
	void input()
	{
		cout << "Enter ID: ";
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
	}
	void print()
	{
		cout << "ID: " << id << endl;
		cout << "Nickname: " << nickname << endl;
	}
};
int main()
{
	Student s1;
	Student* p = nullptr;
	p = &s1;
	p->id = "6811830001";
	p->nickname = "MaPraw";
	cout << "ID: " << p->id << endl;
	cout << "Nickname: " << p->nickname << endl;
	return 0;
}