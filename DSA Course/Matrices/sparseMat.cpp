#include <iostream>
#include <stdio.h>
using namespace std;

// THIS CODE IS USING C

struct Element
{
    int i;
    int j;
    int x;
};

struct sparse
{
    int m;
    int n;
    int num;
    struct Element *ele;
};

void create(struct sparse *s)
{
    cout << "Enter dimensions." << endl;
    scanf("%s%d", &s->m, &s->n);
    cout << "Enter the number of elements." << endl;
    scanf("%d", &s->num);

    s->ele = new Element[s->num];
    cout << "Enter all non zero elements." << endl;
    for (int i = 0; i < s->num; i++)
    {
        scanf("%d%d%d", &s->ele[i].i, &s->ele[i].j, &s->ele[i].x);
    }
}

void Display(struct sparse s)
{
    int i, j, k = 0;

    for (i = 0; i < s.m; i++)
    {
        for (j = 0; j < s.n; i++)
        {
            if (i == s.ele[k].i && j == s.ele[k].j)
            {
                printf("%d", s.ele[k++].x);
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main()
{
    struct sparse s;
    create(&s);
    Display(s);

    return 0;
}

// LOOP CONTIMUING FOR LONG TIME.