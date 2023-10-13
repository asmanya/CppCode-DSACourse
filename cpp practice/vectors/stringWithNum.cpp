#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> test(vector<string> colors)
{
    vector<string> result;
    for (auto &text : colors)
    {
        auto it = find_if(text.begin(), text.end(), [](char c){ return isdigit(c); });

        if (it != text.end())
        {
            result.push_back(text);
        }
    }
    return result;
}

int main()
{
    vector<string> colors = {"red", "green23", "1black", "white", "cyan69"};

    cout << "# Original elements are: " << endl;
    for (string c : colors)
    {
        cout << c << " ";
    }

    vector<string> result = test(colors);

    cout << "\n# Strings with numbers are: " << endl;
    for (string c : result)
    {
        cout << c << " ";
    }

    return 0;
}