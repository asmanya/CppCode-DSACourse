#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
} *top = NULL;

void push(int x)
{
    Node *t;
    t = new Node;

    if (t == NULL)
    {
        cout << "Stack is full";
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop()
{
    Node *t;
    int x = -1;
    if (top == NULL)
    {
        cout << "Stack is empty";
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

void display()
{
    Node *p = top;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    cout << pop();

    return 0;
}