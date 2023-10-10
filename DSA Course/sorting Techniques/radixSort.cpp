#include <iostream>
#include <cmath>

using namespace std;

int Max(int A[], int n)
{
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

class Node
{
public:
    int value;
    Node *next;
};

int countDigits(int x)
{
    int count = 0;
    while (x != 0)
    {
        x = x / 10;
        count++;
    }
    return count;
}

void initializeBins(Node **p, int n)
{
    for (int i = 0; i < n; i++)
    {
        p[i] = nullptr;
    }
}

void insert(Node **ptrBins, int value, int idx)
{
    Node *temp = new Node;
    temp->value = value;
    temp->next = nullptr;

    if (ptrBins[idx] == nullptr)
    {
        ptrBins[idx] = temp;
    }
    else
    {
        Node *p = ptrBins[idx];
        while (p->next != nullptr)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

int Delete(Node **ptrBins, int idx)
{
    Node *p = ptrBins[idx];
    ptrBins[idx] = ptrBins[idx]->next;
    int x = p->value;
    delete p;
    return x;
}

int getBinIndex(int x, int idx)
{
    return (int(x / pow(10, idx))) % 10;
}

void radixSort(int A[], int n)
{
    int max = Max(A, n);
    int nPass = countDigits(max);

    Node **bins = new Node *[10];
    initializeBins(bins, 10);

    for (int pass = 0; pass < nPass; pass++)
    {
        initializeBins(bins, 10);

        for (int i = 0; i < n; i++)
        {
            int binIdx = getBinIndex(A[i], pass);
            insert(bins, A[i], binIdx);
        }

        int i = 0, j = 0;
        while (i < 10)
        {
            while (bins[i] != nullptr)
            {
                A[j++] = Delete(bins, i);
            }
            i++;
        }
    }

    delete[] bins;
}

int main()
{
    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2}, n = 10;

    radixSort(A, n);

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}