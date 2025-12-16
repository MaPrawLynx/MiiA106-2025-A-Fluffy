#include <iostream>
using namespace std;

int main() {
    char sensorInput;

    cout << "--- Line Following Robot Simulation ---" << endl;
    cout << "Enter Sensor Status (L=Left, C=Center, R=Right, S=Stop):" << endl;

    while (true) {
        cout << "Sensor reads: ";
        cin >> sensorInput;

        
        sensorInput = toupper(sensorInput);

        if (sensorInput == 'S') {
            cout << "Stopping Robot..." << endl;
            break; // ออกจากลูป
        }
        else if (sensorInput == 'L') {
            cout << "Action: >> Turn LEFT" << endl;
        }
        else if (sensorInput == 'R') {
            cout << "Action: >> Turn RIGHT" << endl;
        }
        else if (sensorInput == 'C') {
            cout << "Action: >> Go FORWARD" << endl;
        }
        else {
            cout << "Invalid Sensor Data" << endl;
        }
    }

    return 0;
}