#include <iostream>
using namespace std;

void selectionSort(int A[], int n)
{
    int i, j, k, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (A[j] < A[k])
            {
                k = j;
            }
        }
        temp = A[i];
        A[i] = A[k];
        A[k] = temp;
    }
}

int main()
{
    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2}, n = 10;

    selectionSort(A, 10);

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}