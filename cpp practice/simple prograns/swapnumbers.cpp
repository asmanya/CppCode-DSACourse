#include<iostream>
using namespace std;

int main()
{
    // int a, b, c;
    // cout << "Enter the value of a." << endl;
    // cin >> a;
    // cout << "Enter the value of b." << endl;
    // cin >> b;

    // c = a;
    // a = b;
    // b = a;

    // cout << "After swap: a is " << a << " and b is " << b << endl;

    int a, b;
    cout << "Enter the value of a." << endl;
    cin >> a;
    cout << "Enter the value of b." << endl;
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swap: a is " << a << " and b is " << b << endl;

    return 0;
}