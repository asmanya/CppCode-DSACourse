#include <iostream>
using namespace std;

int findMax(int A[], int n)
{
    int max = INT32_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

void countSort(int A[], int n)
{
    int max, i, j, *C;

    max = findMax(A, n);
    C = new int{max + 1};

    for (i = 0; i < max + 1; i++)
    {
        C[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        C[A[i]]++;
    }

    i = j = 0;

    while (i < max + 1)
    {
        if (C[i] > 0)
        {
            A[j++] = i;
            C[i]--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2}, n = 10;

    countSort(A, n);

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}