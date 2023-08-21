#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, n = 5;
    string str[n];
    cout << "Enter names." << endl;

    for (i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] > str[j])
            {
                swap(str[i], str[j]);
            }
        }
    }

    cout << "The aplhabetical order is: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << str[i] << endl;
    }

    return 0;
}