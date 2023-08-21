#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float p, r, t, ci;
    cout << "Enter principal amount." << endl;
    cin >> p;
    cout << "Enter Interest rate." << endl;
    cin >> r;
    cout << "Emter time period in years." << endl;
    cin >> t;

    ci = p * pow((1+r/100),t) - p;
    cout << "The compound interest after " << t << " years is " << ci << endl; 

    return 0;
}