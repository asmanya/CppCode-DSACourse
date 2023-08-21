#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number for reverse" << endl;
    cin >> n;
    int rev = 0;

    while( n!= 0){ // n =123 12 1 0
        int rem = n % 10; // 3 2 1
        rev = rev* 10 + rem; // 3 32 321
        n = n/10; // 12 1 0
    }
    cout << "Reverse of given number " << rev << endl; 

    return 0;
}