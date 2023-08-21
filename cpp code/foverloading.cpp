#include <iostream>
using namespace std;

void print(int num)
{
    cout << "Printing integer: " << num << endl;
}

void print(double num)
{
    cout << "Printing double: " << num << endl;
}

int main()
{
    print(5);
    print(5.5);
    return 0;
}