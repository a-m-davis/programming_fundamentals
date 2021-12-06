#include <iostream>
#include <cmath>
using namespace std;

double presentValue(double, double, int); // Function Prototype

int main(){
    double futureValue, interestRate;
    int years;

    cout << "Enter future value in the account in dollars: " << endl;
    cin >> futureValue;
    cout << "Enter the annual interest rate (as a percentage): " << endl;
    cin >> interestRate;
    interestRate = interestRate / 100;
    cout << "Enter the numbers of years money will be in account: " << endl;
    cin >> years;

    cout << "You need to deposit $" << presentValue(futureValue, interestRate, years) << " today to reach $" << futureValue << " in ";
    cout << years << " years at " << interestRate * 100 << " percent interest." << endl;
    return 0;
}

double presentValue(double futureValue, double interestRate, int years){
    double currentValue = futureValue / (pow(1 + interestRate, years));
    return currentValue;
}