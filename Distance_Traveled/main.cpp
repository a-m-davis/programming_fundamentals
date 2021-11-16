// Program displays distance for each hour a vehicle has traveled.
#include <iostream>
using namespace std;

int main()
{
    double speed, hoursTraveled, distance;
    int counter;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    cout << "How many hours has it traveled? ";
    cin >> hoursTraveled;

    // Input Validation:
    while (speed < 0 || hoursTraveled < 1){
        cout << "ERROR. Speed can not be negative and hours traveled can not be less than one." << endl;
        cout << "Please reenter the speed of the vehicle in mph: ";
        cin >> speed;
        cout << "Please reenter hours traveled: ";
        cin >> hoursTraveled;
    }

    cout << "Hour        Distance Traveled" << endl;
    cout << "--------------------------------" << endl;

    for (counter = 1; counter <= hoursTraveled; counter++){
        distance = speed * counter;
        cout << counter << "\t\t\t" << distance << endl;
    }

    return 0;
}