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

    cout << "deleted value is " << deleteHeap(H, 7) << endl;
    for (int i = 1; i <= 7; i++)
    {
        cout << H[i] << " ";
    }

    cout << endl;
    cout << "deleted value is " << deleteHeap(H, 6) << endl;
    for (int i = 1; i <= 7; i++)
    {
        cout << H[i] << " ";
    }

    return 0;
}