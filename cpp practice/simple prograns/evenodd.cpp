#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    if(num % 2 == 0){
        cout << "The number is even.";
    }else{
        cout << "The number is odd.";
    }

    (num % 2 ==0) ? cout << "Even number" : cout << "Odd number";

    return 0;
}