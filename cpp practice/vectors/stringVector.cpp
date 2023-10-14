#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> test(vector<string> &colors)
{
    for(int i = 0; i< colors.size(); i++)
    {
        colors[i][0] = toupper(colors[i][0]);
        for(int l = 1; l<colors[i].size(); l++)
        {
            colors[i][l] = tolower(colors[i][l]);
        }
    }
    return colors;
}

int main()
{
    vector<string> colors = {"reD", "gReEn", "blACk", "wHiTe", "PiNk"};

    cout << "# Original vector elements are: " << endl;
    for(string c: colors)
    {
        cout << c << " ";
    }

    vector<string> result = test(colors);

    cout << "\n# correcting string vector elements are: " << endl;
    for(string c: result)
    {
        cout << c << " ";
    }

    return 0;
}