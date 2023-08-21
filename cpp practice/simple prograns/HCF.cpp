#include<iostream>
using namespace std;

int main()
{
    int a, b, k;
    cout << "Enter first number." << endl;
    cin >> a;
    cout << "Enter second number." << endl;
    cin >> b;

    for( k = a; k >= 1; k = k-1){
        if( a % k == 0 && b % k == 0){
            cout << "The HCF is " << k <<endl;
            break;
        }
    }

    return 0;
}