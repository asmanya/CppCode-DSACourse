#include <iostream>
using namespace std;

int main()
{
    int row1, col1, row2, col2;

    cout << "Enter the number of rows in first matrix." << endl;
    cin >> row1;
    cout << "Enter the number of columns in first matrix." << endl;
    cin >> col1;

    cout << "Enter the first matrix." << endl;

    int matx1[row1][col1];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> matx1[i][j];
        }
    }

    cout << "First matrix is: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << matx1[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nEnter the number of rows in second matrix." << endl;
    cin >> row2;
    cout << "Enter the number of columns in second matrix." << endl;
    cin >> col2;

    cout << "Enter the second matrix." << endl;

    int matx2[row2][col2];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> matx2[i][j];
        }
    }

    cout << "second matrix is: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << matx2[i][j] << " ";
        }
        cout << "\n";
    }

    if (col1 == row2)
    {
        int mul[row1][col2];
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                mul[i][j] = 0;
                for (int k = 0; k < col1; k++)
                {
                    mul[i][j] += matx1[i][k] * matx2[k][j];
                }
            }
        }

        cout << "\nmatrix multiplication: " << endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout << mul[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "\nMatrix multiplication is not possible." << endl;
    }

    return 0;
}