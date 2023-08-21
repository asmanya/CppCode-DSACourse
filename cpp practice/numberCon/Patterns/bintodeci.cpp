#include <iostream>
using namespace std;

int main()
{
    int binary;
    cout << "Enter the binary number." << endl;
    cin >> binary;

    int decimal = 0, weight = 1, rem;
    while (binary != 0)
    {
        rem = binary % 10;
        decimal += rem * weight;
        binary = binary / 10;
        weight = weight * 2;
    }
    cout << "The decimal number is " << decimal;

    return 0;
}