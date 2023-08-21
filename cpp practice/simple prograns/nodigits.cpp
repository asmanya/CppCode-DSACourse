#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    int a = 0;
    if(n > 0){
        n = n/10;
        a++;
    }

    cout << "The number of digits in number is " << a << endl;

    return 0;
}