#include <iostream>
using namespace std;

void getScore(double &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main(){
    double test1, test2, test3, test4, test5;

    getScore(test1);
    getScore(test2);
    getScore(test3);
    getScore(test4);
    getScore(test5);

    cout << "The average of your top four test scores is: " << endl;
    calcAverage(test1, test2, test3, test4, test5);
    return 0;
}

void getScore(double &testScore){
    cout << "Please enter a test score: ";
    cin >> testScore;
    if (testScore < 0 || testScore > 100){
        cout << "Error. Test score must be between 0 and 100." << endl;
        cout << "Please reenter test score: ";
        cin >> testScore;
    }
}

void calcAverage(int test1, int test2, int test3, int test4, int test5){
    cout << (test1 + test2 + test3 + test4 + test5 - findLowest(test1, test2, test3, test4, test5)) / 4;
}

int findLowest(int test1, int test2, int test3, int test4, int test5) {
    int lowest = test1;
    if (test2 < lowest)
        lowest = test2;
    if (test3 < lowest)
        lowest = test3;
    if (test4 < lowest)
        lowest = test4;
    if (test5 < lowest)
        lowest = test5;
    return lowest;
}