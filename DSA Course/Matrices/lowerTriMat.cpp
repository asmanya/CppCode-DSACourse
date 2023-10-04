#include <iostream>
using namespace std;

class lowerTri
{
private:
    int n;
    int *A;

public:
    lowerTri()
    {
        n = 2;
        A = new int[2 * (2 + 1) / 2];
    }
    lowerTri(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    ~lowerTri()
    {
        delete[] A;
    }
    
    void set(int i, int j, int x);

    int get(int i, int j);
    
    void Display();
    
    int getDimension()
    {
        return n;
    }
};

void lowerTri::set(int i, int j, int x)
{
    if (i >= j)
    {
        // ROW MAJOR FORMULA
        A[i * (i - 1) / 2 + (j - 1)] = x;

        // COLUMN MAJOR FORMULA
        // A[n * (j-1) + (j-2)*(j-1)/2 + i- j] = x;
    }
}

int lowerTri::get(int i, int j)
{
    if (i >= j)
    {
        // ROW MAJOR FORMULA
        return A[i * (i - 1) / 2 + (j - 1)];

        // COLUM MAJOR FORMULA
        // return A[n * (j-1) + (j-2)*(j-1)/2 + i- j] ;
    }
    else
    {
        return 0;
    }
}

void lowerTri::Display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i < j)
            {
                cout << "0 ";
            }
            else
            {
                // ROW MAJOR FORMULA
                cout << A[i * (i - 1) / 2 + (j - 1)] << " ";

                // COLUMN MAJOR FORMULA
                // cout << A[n * (j-1) + (j-2)*(j-1)/2 + i- j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int d;
    cout << "Enter dimensions for the matrix" << endl;
    cin >> d;

    lowerTri lm(d);
    int x;
    cout << "Enter all elements" << endl;
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin >> x;
            lm.set(i, j, x);
        }
    }

    lm.Display();

    return 0;
}