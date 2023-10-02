#include <iostream>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int size;
    int *Q;

public:
    Queue()
    {
        front = rear = -1;
        size = 10;
        Q = new int[size];
    }
    Queue(int size)
    {
        front = rear = -1;
        this->size = size;
        Q = new int[this->size];
    }

    void enqueue(int x);
    int dequeue();
    void display();
};

void Queue ::enqueue(int x)
{
    if ((rear + 1) % size == front)
    {
        cout << "Queue full";
    }
    else
    {
        rear = (rear + 1) % size;
        Q[rear] = x;
    }
}

void Queue ::display()
{
    int i = front + 1;
    do
    {
        cout << Q[i] << " ";
        i = (i + 1) % size;
    } while (i != (rear + 1) % size);
}

int Queue ::dequeue()
{
    int x = -1;
    if (rear == front)
    {
        cout << "Queue emtpy";
    }
    else
    {
        front = (front + 1) % size;
        x = Q[front];
    }
    return x;
}

int main()
{
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    return 0;
}