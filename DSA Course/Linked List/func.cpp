#include <iostream>
#include <climits>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first;

void create(int A[], int n)
{
    struct Node *last, *t;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->next = NULL;
        t->data = A[i];
        last->next = t;
        last = t;
    }
}

int count(struct Node *p)
{
    int c = 0;
    while (p != 0)
    {
        c++;
        p = p->next;
    }
    return c;
}

int rCount(struct Node *p)
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return rCount(p->next) + 1;
    }
}

int sum(struct Node *p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int rSum(struct Node *p)
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return rSum(p->next) + p->data;
    }
}

void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

void rDisplay(struct Node *p)
{
    if (p != NULL)
    {
        cout << p->data << endl;
        rDisplay(p->next);
    }
}

int max(struct Node *p)
{
    int m = INT_MIN;
    while (p)
    {
        if (p->data > m)
        {
            m = p->data;
        }
        p = p->next;
    }
    return m;
}

int rMax(struct Node *p)
{
    int x = 0;
    if (p == 0)
    {
        return -32768;
    }
    else
    {
        x = rMax(p->next);
        if (x > p->data)
        {
            return x;
        }
        else
        {
            return p->data;
        }
    }
}

int min(struct Node *p)
{
    int m = INT_MAX;
    while (p)
    {
        if (p->data < m)
        {
            m = p->data;
        }
        p = p->next;
    }
    return m;
}

Node *search(struct Node *p, int key)
{
    while (p != 0)
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
    return NULL;
}

Node *rSearch(struct Node *p, int key)
{
    if (p == NULL)
    {
        return NULL;
    }
    else
    {
        if (key == p->data)
        {
            return p;
        }
        else
        {
            return rSearch(p->next, key);
        }
    }
}

Node *improveSearch(struct Node *p, int key)
{
    struct Node *q = NULL;
    p = first;
    while (p != NULL)
    {
        if (key == p->data)
        {
            if (q != NULL)
            {
                q->next = p->next;
            }
            else
            {
                first = p->next; // Update the first pointer if the key is found at the beginning
            }
            delete p; // Deallocate the memory of the found node
            return p; // Return the found node, although the original code did not return anything
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
    return NULL; // Return NULL if the key is not found
}

void insert(int pos, int x)
{
    Node *t, *p;
    if (pos == 0)
    {
        t = new Node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else if (pos > 0)
    {
        p = first;
        for (int i = 0; i < pos - 1 && p; i++)
        {
            p = p->next;
        }
        if (p != NULL)
        {
            t = new Node;
            t->data = x;
            t->next = p->next;
            p->next = t;
        }
    }
}

void insertLast(int x)
{
    Node *t, *last;
    t = new Node;
    t->data = x;
    t->next = NULL;
    if (first == NULL)
    {
        first = last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}

void sortedInsert(struct Node *p, int x)
{
    Node *t, *q = NULL;
    t = new Node;
    t->data = x;
    t->next = NULL;

    if (first == NULL)
    {
        first = t;
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

int Delete(struct Node *p, int index)
{
    struct Node *q = NULL;
    int x = -1;

    if (index < 1 || index > count(p))
    {
        return -1;
    }

    else if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        delete q;
        return x;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }
}

void removeDuplicate(struct Node *p)
{
    struct Node *q = p->next;

    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

void reverseLinkedList(struct Node *p)
{
    int *A, i = 0;
    struct Node *q = p;

    A = new int[count(p)];
    while (q != NULL)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while (q != NULL)
    {
        q->data = A[i];
        q = q->next;
        i--;
    }
}

void reverseLinkedList2(struct Node *p)
{
    struct Node *q = NULL, *r = NULL;

    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

int main()
{
    int A[] = {1, 2, 2, 2, 3, 4, 5};
    create(A, 7);
    // cout << count(first) << endl;
    // cout << sum(first) << endl;
    // cout << rMax(first) << endl;
    // cout << min(first) << endl;
    // search(first, 4);
    // insert(2, 10);S
    // insertLast(8);
    // sortedInsert(first, 11);
    // sortedInsert(first, 8);
    // sortedInsert(first, 12);
    // sortedInsert(first, 7);

    // Delete(first, 4);

    cout << "The linked list is now " << endl;
    removeDuplicate(first);
    Display(first);
    reverseLinkedList(first);

    return 0;
}