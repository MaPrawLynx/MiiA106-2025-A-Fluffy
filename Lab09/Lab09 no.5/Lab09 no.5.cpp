#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
	string id;
	string nickname;
	int height; // in centimeters
	int weight; // in kilograms
	void input()
	{
		cout << "Enter ID: ";
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
		cout << "Enter Height (in cm): ";
		cin >> height;
		cout << "Enter Weight (in kilograms): ";
		cin >> weight;
	}
	void print()
	{
		cout << "ID: " << id << endl;
		cout << "Nickname: " << nickname << endl;
		cout << "Height: " << height << " cm" << endl;
		cout << "Weight: " << weight << " kg" << endl;
	}
	double calcBMI()
	{
		double h = height / 100.0;
		return weight / (h * h);
	}
};
int main()
{
	Student s1;
	cout << "=== Input Student ===\n";
	s1.input();
	cout << "\n=== Student Info ===\n";
	s1.print();
	cout << "BMI : " << s1.calcBMI() << endl;
	return 0;
}