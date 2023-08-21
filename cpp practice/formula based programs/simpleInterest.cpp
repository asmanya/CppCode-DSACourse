#include<iostream>
using namespace std;

int main()
{
    float amount, rate, time, si;
    cout << "Enter the amount." << endl;
    cin >> amount;
    cout << "Enter rate of interest." << endl;
    cin >> rate;
    cout << "Enter duration of time." << endl;
    cin >> time;

    si = (amount * rate * time)/100;
    cout << "Simple interest is " << si << endl;
    return 0;
}