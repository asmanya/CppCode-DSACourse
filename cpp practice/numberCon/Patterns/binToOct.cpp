#include <iostream>
using namespace std;

int main()
{
    int binary;
    cout << "Enter the binary number." << endl;
    cin >> binary;

    int rem, decimal = 0, weight = 1, mod = 0, octal = 1 ;
    while (binary != 0)
    {
        rem = binary % 10;
        decimal += rem * weight;
        binary = binary / 10;
        weight = weight * 2;
    }

    while(decimal > 0){
        mod = decimal % 8;
        octal = (octal * 10) + mod;
        decimal = decimal / 8;
    }

    while(octal > 1){

    }

    cout << "The value of octal is: " << 

    return 0;
}