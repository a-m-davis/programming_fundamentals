#include <iostream>
using namespace std;

int *dynamicAllocation (int);

int main() {
    const int NUMBER = 6;
    int *newArrayNumbers = dynamicAllocation(NUMBER);

    for (int i = 0; i < NUMBER; i++){
        cout << newArrayNumbers[i] << endl;
    }

    delete [] newArrayNumbers;
    newArrayNumbers = nullptr;

    return 0;
}

int *dynamicAllocation(int number){
    int *newArray = new int[number];
    return newArray;
}