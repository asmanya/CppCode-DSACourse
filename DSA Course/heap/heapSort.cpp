#include <iostream>
using namespace std;

void insertMaxHeap(int A[], int n)
{
    int i = n, temp;
    temp = A[i];

    while (i > 1 && temp > A[i / 2])
    {
        A[i] = A[i / 2];
        i = i / 2;
    }
    A[i] = temp;
}

// void insertMinHeap(int H[], int n)
// {
//     int i = n, temp;
//     temp = H[i];

//     while (i > 1 && temp < H[i / 2])
//     {
//         H[i] = H[i / 2];
//         i = i / 2;
//     }
//     H[i] = temp;
// }

int deleteHeap(int A[], int n)
{
    int i, j, x, temp, val;
    i = 1;
    j = 2 * i;
    val = A[1];
    x = A[n];
    A[1] = x;

    while (j <= n - 1)
    {
        if (j < n - 1 && A[j] < A[j + 1])
        {
            j = j + 1;
        }
        if (A[i] < A[j])
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i = j;
            j = 2 * i;
        }
        else
        {
            break;
        }
    }
    A[n] = val;

    return val;
}

int main()
{
    int H[] = {0, 10, 20, 30, 25, 5, 40, 35};
    // stored in max heap - 40, 25, 35, 10, 5, 20, 30

    // MAX HEAP
    for (int i = 2; i <= 7; i++)
    {
        insertMaxHeap(H, i);
    }

    // MIN HEAP
    // for (int i = 2; i <= 7; i++)
    // {
    //     insertMinHeap(H, i);
    // }

    // for(int i = 1; i <= 7; i++)
    // {
    //     cout << H[i] << " ";
    // }

    for (int i = 1; i <= 7; i++)
    {
        cout << H[i] << " ";
    }
    cout << endl;

    for (int i = 7; i > 1; i--)
    {
        deleteHeap(H, i);
    }

    cout << "heap sort gives: ";
    
    for (int i = 1; i <= 7; i++)
    {
        cout << H[i] << " ";
    }

    return 0;
}