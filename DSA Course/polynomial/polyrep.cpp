#include <iostream>
#include <stdio.h>
using namespace std;

class Term
{
public:
    int coeff;
    int exp;
};

class Poly
{
public:
    int n;
    Term *terms; // Remove the "class" keyword here
};

void create(Poly *p)
{
    cout << "Enter the number of terms in polynomial." << endl;
    cin >> p->n;

    p->terms = new Term[p->n];

    cout << "Enter coefficient and exponent." << endl;
    for (int i = 0; i < p->n; i++)
    {
        scanf("%d%d", &p->terms[i].coeff, &p->terms[i].exp);
    }
}

void Display(Poly p)
{
    for (int i = 0; i < p.n; i++)
    {
        cout << p.terms[i].coeff << "x" << p.terms[i].exp;
        if (i < p.n - 1)
        {
            cout << " + ";
        }
    }
    cout << endl;
}

Poly *add(Poly *p1, Poly *p2)
{
    Poly *sum;
    sum = new Poly; // Allocate memory for a single Poly object

    int i = 0, j = 0, k = 0;

    while (i < p1->n && j < p2->n)
    {
        if (p1->terms[i].exp > p2->terms[j].exp)
        {
            sum->terms[k++] = p1->terms[i++];
        }
        else if (p1->terms[i].exp < p2->terms[j].exp)
        {
            sum->terms[k++] = p2->terms[j++];
        }
        else
        {
            sum->terms[k].exp = p1->terms[i].exp;
            sum->terms[k++].coeff = p1->terms[i++].coeff + p2->terms[j++].coeff;
        }
    }

    for (; i < p1->n; i++)
    {
        sum->terms[k++] = p1->terms[i];
    }
    for (; j < p2->n; j++) // Fix the increment of j
    {
        sum->terms[k++] = p2->terms[j];
    }

    sum->n = k;
    return sum;
}

int main()
{
    Poly p1;
    Poly p2;
    Poly p3;
    create(&p1);
    create(&p2);
    p3 = *add(&p1, &p2); // Dereference the result of add()

    cout << "\n";
    Display(p1);
    cout << "\n";
    Display(p2);
    cout << "\n";
    Display(p3);

    // Deallocate memory to avoid memory leaks
    delete[] p1.terms;
    delete[] p2.terms;
    delete[] p3.terms;

    return 0;
}
