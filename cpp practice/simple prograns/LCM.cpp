#include<iostream>
using namespace std;

int main()
{
    int a, b, k;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;

    for (k = a; k <= a*b; k = k+1){
        if( (k % a == 0) && (k % b == 0)){
            cout << k << endl;
            break;
        }
    }

    cout << "The LCM of a and b is " << k << endl;

    return 0;
}