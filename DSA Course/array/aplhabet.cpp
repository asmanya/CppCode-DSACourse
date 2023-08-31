#include <iostream>
using namespace std;

int main()
{
    string str[20], temp;

    cout << "Enter 20 words: " << endl;
    for(int i = 0; i < 20; ++i)
    {
      getline(cin, str[i]);
    }

    // Use Bubble Sort to arrange words
    for (int i = 0; i < 19; ++i) {
        for (int j = 0; j < 19 - i; ++j) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    cout << "In lexicographical order: " << endl;

    for(int i = 0; i < 19; ++i)
    {
       cout << str[i] << endl;
    }
    return 0;
}