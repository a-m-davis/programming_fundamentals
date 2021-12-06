#include <iostream>
#include <cmath>
using namespace std;

double fallingDistance(int fallingTime); // Function Prototype

int main(){
    for (int n = 1; n <= 10; n++){
        cout << fallingDistance(n) << " meters" << endl;
    }
    return 0;
}

double fallingDistance(int time){
    double distance = 0.5 * 9.8 * pow(time, 2);
    return distance;
}