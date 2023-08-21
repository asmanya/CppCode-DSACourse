#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[20];
    int i, j, len;

    cout << "Enter a string." << endl;
    cin >> str;

    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
            {
                for (j = i; j < len; j++)
                {
                    str[j] = str[j + 1];
                }
                len--;
            }
    }

    cout << "The string without vowels is: " << str << endl;

    return 0;
    }