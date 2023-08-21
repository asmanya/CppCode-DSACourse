#include <iostream>
using namespace std;

int main()
{
    int A[5];
    A[0] = 12;
    A[1] = 15;
    A[2] = 23;
    A[3] = 32;
    A[4] = 37;
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }

    cout << sizeof(A);

    return 0;
}