#include <iostream>
using namespace std;

void insertionSort(int A[], int n)
{
    int i, x, j;
    for (i = 1; i < n - 1; i++)
    {
        j = i - 1;
        x = A[i];
        while (j >= -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}

int main()
{
    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2}, n = 10;

    insertionSort(A, 10);

    for (int i = 0; i < n - 1; i++)
    {
        cout << A[i] << " " ;
    }

    return 0;
}