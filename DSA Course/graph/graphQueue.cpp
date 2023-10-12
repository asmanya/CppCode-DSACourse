#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    void enqueue(int x);
    int dequeue();
    bool isEmpty();
} *front = NULL, *rear = NULL;

void Node ::enqueue(int x)
{
    Node *t;
    t = new Node;
    if (t == NULL)
    {
        cout << "Queue is full." << endl;
    }
    else
    {
        data = x;
        next = NULL;
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

int Node ::dequeue()
{
    int x = -1;
    Node *t;
    t = new Node;

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

bool Node ::isEmpty()
{
    if (front == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    return 0;
}