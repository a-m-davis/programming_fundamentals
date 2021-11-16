#include <iostream>
using namespace std;

int main()
{
    double initialOrganismSize, dailyIncrease, multiplicationDays;
    double populationSizePerDay, percentIncrease;
    int counter;

    cout << "Enter the starting number of organisms: ";
    cin >> initialOrganismSize;
    while (initialOrganismSize < 2){
        cout << "ERROR: Initial organism size must be greater than or equal to 2." << endl;
        cout << "Please reenter the starting number of organisms: ";
        cin >> initialOrganismSize;
    }

    cout << "Enter the average daily population increase as a percentage: ";
    cin >> dailyIncrease;
    while (dailyIncrease < 0 ){
        cout << "ERROR: Daily population increase can not be negative." << endl;
        cout << "Please reenter the daily population increase as a percentage: ";
        cin >> dailyIncrease;
    }

    cout << "Enter the number of days they will multiply: ";
    cin >> multiplicationDays;
    while (multiplicationDays < 1 ){
        cout << "ERROR: Number of days can not be less than 1." << endl;
        cout << "Please reenter the number of days they will multiply: ";
        cin >> multiplicationDays;
    }

    percentIncrease = 1.0 + (dailyIncrease / 100);
    populationSizePerDay = initialOrganismSize;

    cout << "Day     Population Size" << endl;
    cout << "---------------------------" << endl;

    for (counter = 1; counter <= multiplicationDays; counter++){
        populationSizePerDay *= percentIncrease;
        cout << counter << "\t\t\t" << populationSizePerDay << endl;
    }

    return 0;
}