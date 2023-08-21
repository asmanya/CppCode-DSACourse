#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int arm = 0, a, b, c = 0,temp , num;
    cout << "Enter a number" << endl;
    cin >> num;
    b = num;
    temp = num;

    while(num > 0){
        num = num /10;
        c++;
    }

    while(b > 0){
        a = b % 10;
        b = b /10;
        arm = arm + pow(a, c) ;
    }

    if(arm == temp){
        cout << "This is an armstrong number.";
    }else {
        cout << "This is not an armstrong number.";
    }

    return 0;
}