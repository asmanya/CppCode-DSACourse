#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;

    // s.insert()
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(20);

    // s.begin() - s.end()
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    // s.size()
    cout << "\nnumber of elements: " << s.size() << " ";

    // s.find() - searches for element, if not found returns s.end()
    // s.count() - searches for element, if not found returns false else true
    int key = 20;
    if (s.find(key) == s.end())
    {
        cout << "\nkey not found."; 
    }
    else
    {
        cout << "\nkey found.";
    }

    // s.erase() - deletes a key
    int deleted_key = 15;
    s.erase(deleted_key);

    // s.clear()
    s.clear();
    cout << "\nnumber of elements: " << s.size() << " ";
}