#include <iostream>
using namespace std;

int naturalSum(int n)
{
    if (n > 0)
    {
        return n + naturalSum(n - 1);
    }
}

int main()
{
    cout << naturalSum(6);
    return 0;
}