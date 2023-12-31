#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *t;
    t = new Node;
    if (t == NULL)
    {
        cout << "Queue is full." << endl;
    }
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x = -1;
    Node *t;

    if (front == NULL)
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}

void Display()
{
    Node *p = front;
    while(p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    Display();

    return 0;
}