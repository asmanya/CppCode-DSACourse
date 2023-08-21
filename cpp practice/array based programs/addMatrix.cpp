#include <iostream>
using namespace std;

int main()
{
    int row1, col1, row2, col2, i, j;

    cout << "Enter the number of rows for first matrix." << endl;
    cin >> row1;
    cout << "Enter the number of columns for first matrix." << endl;
    cin >> col1;

    int matx1[row1][col1];
    cout << "Enter first matrix." << endl;
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            cin >> matx1[i][j];
        }
    }

    cout << "The first matrix is: " << endl;
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            cout << matx1[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Enter the number of rows for second matrix." << endl;
    cin >> row2;
    cout << "Enter the number of columns for second matrix." << endl;
    cin >> col2;

    int matx2[row2][col2];
    cout << "Enter second matrix." << endl;
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            cin >> matx2[i][j];
        }
    }

    cout << "The second matrix is: " << endl;
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            cout << matx2[i][j] << " ";
        }
        cout << "\n";
    }

    int matx[row1][col1] = {0};
    if ((row1 == row2) && (col1 == col2))
    {
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++)
            {
                matx[i][j] = matx1[i][j] + matx2[i][j];
            }
        }
    }
    else
    {
        cout << "Enter valid matrix." << endl;
    }

    cout << "The addition matrix is: " << endl;
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            cout << matx[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}