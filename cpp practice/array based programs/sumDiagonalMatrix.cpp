#include <iostream>
using namespace std;

int main()
{
    int row, col, i, j, sum;
    cout << "Enter the number of rows for the matrix." << endl;
    cin >> row;
    cout << "Enter the number of columns for the matrix." << endl;
    cin >> col;

    int matx[row][col];
    cout << "Enter the matrix." << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> matx[i][j];
        }
    }

    cout << "The matrix is: " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << matx[i][j] << " ";
        }
        cout << "\n";
    }

    sum = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += matx[i][j];
            }
        }
    }

    cout << "The addition of diagonal array elements in the matrix is: " << sum;
    return 0;
}