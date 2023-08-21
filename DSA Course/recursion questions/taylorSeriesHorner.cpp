#include<iostream>
using namespace std;

int e(int x, int n)
{
    int s = 1;
    if(n > 0, n--)
    {
        s = ((x* s)/n) + 1;
    }
    return s;
}

int main()
{
    cout << e(1,5);
    return 0;
}