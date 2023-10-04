#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x = 10, y = 20;
    cout << "The maximum value is " << maximum(x, y) << endl;
    
    float p = 4.10, q = 2.42;
    cout << "The maximum value is " << maximum(p, q) << endl;

    return 0;
}