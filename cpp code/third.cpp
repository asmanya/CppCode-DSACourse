#include <iostream>
using namespace std;

int main(){
    int a = 5, b= 2;
    cout << a + b <<endl;
    cout << a - b <<endl;
    cout << a * b <<endl;
    cout << a / b <<endl;

    int c = 4, d = 2;
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a > b) << endl;
    cout << (a <b) << endl;

    bool isRaining = true, isCold = false;
    cout << (isRaining && isCold) <<endl;
    cout << (isRaining || isCold) <<endl;
    cout << (!isRaining) << endl;

    int e = 2;
    e = e+4;
    cout << e << endl;
}