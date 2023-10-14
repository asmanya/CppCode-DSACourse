#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int test(vector<string> strs)
{
    for(auto ch: strs.at(1))
    {
        if(strs.at(0).find(toupper(ch)) == string::npos && strs.at(0).find(tolower(ch)) == string::npos)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<string> strs = {"python", "py"};
    vector<string> strs2 = {"c++", "cpp"};
    cout << "Original string." << endl;
    
    for(string c: strs)
    {
        cout << c << " ";
    }

    for(string c: strs2)
    {
        cout << c << " ";
    }

    int result = test(strs);
    int result2 = test(strs2);

    cout << "\nCheck gives : " << result;
    cout << "\nCheck gives : " << result2;

    return 0;
}