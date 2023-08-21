#include<iostream>
#include<conio.h>
using namespace std;

long int fact(int);

int main()
{
    int n, r;
    long int ncr, npr;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "Enter the value of r" << endl;
    cin >> r;

    npr = fact(n)/fact(n-r);
    ncr = npr/fact(r);

    cout << "NPR value: " << npr << endl;
    cout << "NCR value: " << ncr << endl;

    return 0;
}

long int fact(int x){
    int i, f =1;
    for(i = 2; i <= x; i ++){
        f = f*i;
    }
    return f;
}