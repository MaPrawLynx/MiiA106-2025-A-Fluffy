#include <iostream>

using namespace std;



void swapValue(int a, int b);          
void swapReference(int& a, int& b);    

int main() {
    int num1, num2;

   
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    cout << "-----------------------" << endl;
   
    cout << "Before swap: a = " << num1 << ", b = " << num2 << endl;

 
    swapValue(num1, num2);
 
    cout << "After swap (Call by Value): a = " << num1 << ", b = " << num2 << endl;

  
    swapReference(num1, num2);
  
    cout << "After swap (Call by Reference): a = " << num1 << ", b = " << num2 << endl;

    return 0;
}




void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}


void swapReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}