#include <iostream>
using namespace std;

int main()
{
    char line[150];
    int u, v, w, x;
    u = v = w = x = 0;
    cout << "Enter a string." << endl;
    cin >> line;

    for (int i = 0; i < (sizeof(line) / sizeof(char)); i++)
    {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u')
        {
            ++u;
        }
        else if (line[i] >= '0' && line[i] <= '9')
        {
            ++v;
        }
        else if (line[i] == ' ')
        {
            ++w;
        }
        else
        {
            ++x;
        }
    }

    cout << "Vowels: " << u << endl;
    cout << "digits: " << v << endl;
    cout << "spaces: " << w << endl;
    cout << "consonants: " << x << endl;

    return 0;
}
