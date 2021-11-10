#include <iostream>
using namespace std;

int main()
{
	double number1, number2;
	
	cout << "Enter first number: ";
	cin >> number1;
	cout << "Enter second number: ";
	cin >> number2;

	if (number1 < number2)
		cout << number1 << " is less than " << number2 << endl;
	else if (number1 > number2)
		cout << number1 << " is greater than " << number2 << endl;
	else 
		cout << number1 << " is equal to " << number2 << endl;
	
    return 0;
}