#include <iostream>

using namespace std;


int maxOfThree(int a, int b, int c);

int main() {
    int num1, num2, num3;

  
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;

   
    int maxVal = maxOfThree(num1, num2, num3);

  
    cout << "Maximum value is: " << maxVal << endl;

    return 0;
}


int maxOfThree(int a, int b, int c) {
    
    int max = a;

    
    if (b > max) {
        max = b;
    }

    
    if (c > max) {
        max = c;
    }

    
    return max;
}