#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double height, weight, BMI;

	cout << "Enter height in inches: ";
	cin >> height;
	cout << "Enter weight in pounds: ";
	cin >> weight;
	cout << endl;

	//BMI calculation
	BMI = weight * (703 / pow(height, 2));

	if (BMI > 25)
		cout << "BMI is " << BMI << ". This is considered overweight.";
	else if (BMI >= 18.5)
		cout << "BMI is " << BMI << ". This is considered an optimal weight.";
	else
		cout << "BMI is " << BMI << ". This is considered underweight.";

	return 0;
}
