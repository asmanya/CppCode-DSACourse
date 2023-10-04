#include <iostream>
#include <cstdlib>
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

Node *Rinsert(Node *p, int key)
{
    if (p == NULL)
    {
        Node *t = NULL;
        t = new Node;
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key < p->data)
    {
        p->lchild = Rinsert(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->rchild = Rinsert(p->rchild, key);
    }

    return p;
}

int height(Node *p)
{
    int x, y;
    if (p == NULL)
    {
        return 0;
    }
    else
    {
        x = height(p->lchild);
        y = height(p->rchild);
        return x > y ? x + 1 : y + 1;
    }
}

Node *inPre(Node *p)
{
    while (p && p->rchild != NULL)
    {
        p = p->rchild;
    }
    return p;
}

Node *inSucc(Node *p)
{
    while (p && p->lchild != NULL)
    {
        p = p->lchild;
    }
    return p;
}

Node *Delete(Node *p, int key)
{
    Node *q;

    if (p == NULL)
    {
        return NULL;
    }
    if (p->lchild == NULL && p->rchild == NULL)
    {
        if (p == root)
        {
            root = NULL;
        }
        free(p);
        return NULL;
    }

    if (key < p->data)
    {
        p->lchild = Delete(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->rchild = Delete(p->rchild, key);
    }
    else
    {
        if (height(p->lchild) > height(p->rchild))
        {
            q = inPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        }
        else
        {
            q = inSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }
    return p;
}

int main()
{
    Node *temp;

    root = Rinsert(root, 10);
    Rinsert(root, 5);
    Rinsert(root, 20);
    Rinsert(root, 8);
    Rinsert(root, 30);

    // insert(10);
    // insert(5);
    // insert(20);
    // insert(8);
    // insert(30);

    Delete(root, 10);

    inOrder(root);
    cout << endl;

    temp = search(20);
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