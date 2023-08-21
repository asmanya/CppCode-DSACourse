#include <iostream>
using namespace std;

int main()
{
    int row, col, i, j;
    cout << "Enter the number of rows." << endl;
    cin >> row;
    cout << "Enter the number of columns." << endl;
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

    int matxT[row][col];
    cout << "The transpose of the matrix is: " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            matxT[j][i] = matx[i][j];
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << matxT[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}