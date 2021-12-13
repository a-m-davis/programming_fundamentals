#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream inputFile;
    string fileName;
    vector<float> numbers;

    cout << "Please enter file name: " << endl;
    cin >> fileName;

    inputFile.open(fileName);

    float fileNumber;
    while (inputFile >> fileNumber)
        numbers.push_back(fileNumber);

    inputFile.close();

    float lowestNumber = numbers[0];
    for (int count = 1; count < numbers.size(); count++){
        if (numbers[count] < lowestNumber) {
            lowestNumber = numbers[count];
        }
    }

    float highestNumber = numbers[0];
    for (int count = 1; count < numbers.size(); count++){
        if (numbers[count] > highestNumber){
            highestNumber = numbers[count];
        }
    }

    float totalNumbers = 0;
    for (int count = 0; count < numbers.size(); count ++){
        totalNumbers += numbers[count];
    }

    float averageNumbers;
    averageNumbers = totalNumbers / numbers.size();

    cout << "The lowest number in the array: " << lowestNumber << endl;
    cout << "The highest number in the array: " << highestNumber << endl;
    cout << "The total of the numbers in the array: " << totalNumbers << endl;
    cout << "The average of the numbers in the array: " << averageNumbers << endl;

    return 0;
}
