#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void sortedInsert(Node **H, int x)
{
    Node *t, *q = nullptr, *p = *H, *first;
    t = new Node;
    t->data = x;
    t->next = nullptr;

    if (*H == nullptr)
    {
        *H = t;
    }
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

Node *search(Node *p, int key)
{
    while (p != nullptr)
    {
        if (key == p->data)
        {
            return p;
        }
        else
        {
            p = p->next;
        }
    }
    return nullptr;
}

int hashin(int key)
{
    return key % 10;
}

void insert(Node *H[], int key)
{
    int index = hashin(key);
    sortedInsert(&H[index], key);
}

int main()
{
    Node *HT[10];
    Node *temp;
    int i;

    for (i = 0; i < 10; i++)
    {
        HT[i] = nullptr;
    }

    insert(HT, 12);
    insert(HT, 22);
    insert(HT, 42);

    temp = search(HT[hashin(22)], 22);

    cout << temp->data;

    return 0;
}