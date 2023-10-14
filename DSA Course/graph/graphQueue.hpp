#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

class Queue
{
private:
    Node* front;
    Node* rear;

public:
    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int x)
    {
        Node* t = new Node;
        if (t == nullptr)
        {
            cout << "Queue is full." << endl;
        }
        else
        {
            t->data = x;
            t->next = nullptr;
            if (front == nullptr)
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
        if (front == nullptr)
        {
            cout << "Queue is empty." << endl;
        }
        else
        {
            x = front->data;
            Node* t = front;
            front = front->next;
            delete t; // Free the memory allocated for the node
        }
        return x;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }
};
