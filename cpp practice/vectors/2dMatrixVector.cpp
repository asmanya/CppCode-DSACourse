#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> test(int n)
{
    vector<int> t(n, n);
    vector<vector<int>> arr(n, t);
    return arr;
}

int main()
{
    int n;
    cout << "Enter an integer value." << endl;
    cin >> n;

    vector<vector<int>> result = test(n);
    cout << "The matrix is: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}