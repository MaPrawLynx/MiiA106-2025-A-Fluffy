#include <iostream>
#include <climits>

using namespace std;

void processData(int input, int& minRef, int& countRef);

int main() {
	int input;

	int count = 0;

	int minVal = INT_MAX;

	while (true) {
		cout << "Enter number: ";
		cin >> input;

		if (input == 0) {
			break;
		}

		processData(input, minVal, count);
	}

	cout << "------------------------" << endl;
	cout << "total numbers entered:  " << count << endl;

	if (count > 0) {
		cout << "Minimum value: " << minVal << endl;
	}
	else {
		cout << "No numbers were entered." << endl;
	}
	return 0;
}

void processData(int input, int& minRef, int& countRef) {

	countRef++;

	if (input < minRef) {
		minRef = input;
	}
}