#include <iostream>

using namespace std;

class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};

class Queue
{
private:
    int size;
    int front;
    int rear;
    Node **Q;

public:
    Queue()
    {
        size = 10;
        front = rear = -1;
        Q = new Node *[size];
    }
    Queue(int x)
    {
        size = x;
        front = rear = -1;
        Q = new Node *[size];
    }
    void enqueue(Node *x);
    Node *dequeue();
    void display();
    bool isEmpty();
};

void Queue ::enqueue(Node *x)
{
    if (rear == size - 1)
    {
        cout << "Queue is full";
    }
    else
    {
        rear++;
        Q[rear] = x;
    }
}

Node *Queue ::dequeue()
{
    Node *x = NULL;
    if (front == rear)
    {
        cout << "Stack is empty";
    }
    else
    {
        front++;
        x = Q[front];
    }
    return x;
}

void Queue ::display()
{
    for (int i = front + 1; i <= rear; i++)
    {
        cout << Q[i]->data << " ";
    }
}

bool Queue ::isEmpty()
{
    if (front == rear)
    {
        return true;
    }
    else
    {
        return false;
    }
}

class Tree
{
public:
    Node *root;
    Tree()
    {
        root = NULL;
    }
    void createTree();
    void preOrder(Node *p);
    void postOrder(Node *p);
    void inOrder(Node *p);
    void levelOrder(Node *p);
    int height(Node *root);
    int count(Node *root);
};

void Tree ::createTree()
{
    Node *p, *t;
    int x;
    Queue q(100);

    cout << "Enter root value" << endl;
    cin >> x;

    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);

    while (!q.isEmpty())
    {
        p = q.dequeue();
        cout << "Emter left child" << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }

        cout << "Enter right child" << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

void Tree ::preOrder(Node *p)
{
    while (p)
    {
        cout << p->data;
        preOrder(p->lchild);
        preOrder(p->rchild);
    }
}

void Tree ::postOrder(Node *p)
{
    while (p)
    {
        postOrder(p->lchild);
        postOrder(p->rchild);
        cout << p->data;
    }
}

void Tree ::inOrder(Node *p)
{
    while (p)
    {
        inOrder(p->lchild);
        cout << p->data;
        inOrder(p->rchild);
    }
}

void Tree::levelOrder(Node *p)
{
    Queue q(100);
    cout << p->data;
    q.enqueue(p);

    while (!q.isEmpty())
    {
        root = q.dequeue();
        if (root->lchild)
        {
            cout << root->lchild->data;
            q.enqueue(root->lchild);
        }
        if (root->rchild)
        {
            cout << root->rchild->data;
            q.enqueue(root->rchild);
        }
    }
}

int Tree ::height(Node *root)
{
    int x = 0, y = 0;
    if (root == 0)
    {
        return 0;
    }
    else
    {
        x = height(root->lchild);
        y = height(root->rchild);
    }
    if (x > y)
    {
        return x + 1;
    }
    else
    {
        return y + 1;
    }
}

int Tree ::count(Node *root)
{
    if (root)
    {
        return count(root->lchild) + count(root->rchild) + 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    Tree T;
    T.createTree();
    T.preOrder(T.root);

    return 0;
}