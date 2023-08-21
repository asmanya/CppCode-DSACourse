#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, ans;
    cout << "Enter the number to find the square root." << endl;
    cin >> a;

    ans = pow(a, 0.5);
    cout << "The square root of " << a << " is " << ans << endl;

    return 0;
}