#include <iostream>
using namespace std;

int main()
{
    int row, column;

    cout << "Pattern A:" << endl;
    for (row = 1; row <= 10; row++){
        for (column = 1; column <= row; column++){
            cout << "+";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Pattern B:" << endl;
    for (row = 1; row <= 10; row++){
        for (column = 10; column >= row; column --){
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}