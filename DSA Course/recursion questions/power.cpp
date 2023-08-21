#include <iostream>
using namespace std;

double power(int b, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        if (p % 2 == 0)
        {
            return power(b * b, p / 2);
        }
        else
        {
            return b * (power(b * b, (p - 1) / 2));
        }
    }
}

int main()
{
    cout << power(2, 4);

    return 0;
}