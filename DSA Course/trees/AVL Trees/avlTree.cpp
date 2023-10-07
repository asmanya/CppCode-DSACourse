#include <iostream>
using namespace std;

class Node
{
public:
    Node *lchild;
    int data;
    int height;
    Node *rchild;
} *root = NULL;

int nodeHeight(Node *p)
{
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;

    return hl > hr ? hl + 1 : hr + 1;
}

int balanceFactor(Node *p)
{
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;

    return hl - hr;
}

Node *llRotation(Node *p)
{
    return NULL;
}

Node *rrRotation(Node *p)
{
    return NULL;
}

Node *lrRotation(Node *p)
{
    Node *pl = p->lchild;
    Node *plr = pl->rchild;

    pl->rchild = p;
    p->lchild = plr;
    p->height = nodeHeight(p);
    pl->height = nodeHeight(pl);

    if (root == p)
        root = pl;

    return pl;
}

Node *rlRotation(Node *p)
{
    Node *pl = p->lchild;
    Node *plr = pl->rchild;

    pl->rchild = plr->lchild;
    p->lchild = plr->rchild;
    plr->lchild = pl;
    plr->rchild = p;

    p->height = nodeHeight(p);
    pl->height = nodeHeight(pl);
    plr->height = nodeHeight(plr);

    if (root == p)
        root = plr;

    return plr;
}

Node *Rinsert(Node *p, int key)
{
    if (p == NULL)
    {
        Node *t = NULL;
        t = new Node;
        t->data = key;
        t->height = 1;
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

    p->height = nodeHeight(p);
    if (balanceFactor(p) == 2 && balanceFactor(p->lchild) == 1)
    {
        return llRotation(p);
    }
    else if (balanceFactor(p) == 2 && balanceFactor(p->lchild) == -1)
    {
        return lrRotation(p);
    }
    else if (balanceFactor(p) == -2 && balanceFactor(p->rchild) == -1)
    {
        return rrRotation(p);
    }
    else if (balanceFactor(p) == -2 && balanceFactor(p->rchild) == 1)
    {
        return rlRotation(p);
    }

    return p;
}

int main()
{
    root = Rinsert(root, 10);
    Rinsert(root, 5);
    Rinsert(root, 2);

    return 0;
}