#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;
    cout << "Enter third number" << endl;
    cin >> c;

    if((a > b) && (a > c)){
        cout << a << " is the greatest number." << endl;
    }else if (( b > a) && (b > c)){
        cout << b << " is the greatest number." << endl;
    }else if ((c > a) && (c > b)){
        cout << c << " is the greatest number." << endl;
    }else{
        cout << "Numbers might be same" << endl;
    }

    return 0;
}