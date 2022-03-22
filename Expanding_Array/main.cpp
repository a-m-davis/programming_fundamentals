#include <iostream>
#include <fstream>
using namespace std;

int *doubleArray(int [], int);
void displayArray(int *, int);

int main() {

    int N = 0;
    cin >> N;

    if (N<0 || N>50)
        return -1;

    int *numbers = new int[N];

    ifstream inputFile;
    inputFile.open("data.txt");

    for (int index = 0; index < N; index++){
        inputFile >> numbers[index];
    }

    inputFile.close();

    int *numbersDoubled = doubleArray(numbers, N);

    displayArray(numbersDoubled, (N*2));

    delete [] numbersDoubled;
    numbersDoubled = nullptr;

    return 0;
}

int *doubleArray(int array[], int SIZE){
    const int NEW_SIZE = SIZE * 2;
    int *newArray = new int[NEW_SIZE];

    for (int i = 0; i < NEW_SIZE; i++){
        if (i < SIZE){
            *(newArray + i) = array[i];
        } else {
            *(newArray + i ) = 0;
        }
    }
    return newArray;
}

void displayArray(int array[], int size){
    for (int i = 0; i < size; i++){
        cout << *(array + i) << endl;
    }
}