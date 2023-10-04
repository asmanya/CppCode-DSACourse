#include <iostream>
using namespace std;

class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
} *root = NULL;

void insert(int key)
{
    Node *t = root;
    Node *r, *p;

    if (root == NULL)
    {
        p = new Node;
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }

    while (t != NULL)
    {
        r = t;
        if (key < t->data)
        {
            t = t->lchild;
        }
        else if (key > t->data)
        {
            t = t->rchild;
        }
        else
        {
            return;
        }
    }

    p = new Node;
    p->data = key;
    p->lchild = p->rchild = NULL;

    if (key < r->data)
    {
        r->lchild = p;
    }
    else
    {
        r->rchild = p;
    }
}

void inOrder(Node *p)
{
    if (p != NULL)
    {
        inOrder(p->lchild);
        cout << p->data << " ";
        inOrder(p->rchild);
    }
}

Node *search(int key) // iterative version
{
    Node *t = root;
    while (t)
    {
        if (key == t->data)
        {
            return t;
        }
        else if (key < t->data)
        {
            t = t->lchild;
        }
        else
        {
            t = t->rchild;
        }
    }
    return NULL;
}

int main()
{
    Node *temp;

    insert(10);
    insert(5);
    insert(20);
    insert(8);
    insert(30);

    inOrder(root);
    temp = search(20);
    cout << endl;
    if (temp != NULL)
    {
        cout << "Element " << temp->data << " is found." << endl;
    }
    else
    {
        cout << "Element is not found." << endl;
    }

    return 0;
}