#include <iostream>
using namespace std;

int pass(int[], int);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    pass(arr, 5);
    return 0;
}

int pass(int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << endl;
    }
}