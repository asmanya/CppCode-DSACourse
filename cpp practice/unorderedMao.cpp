#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;
int main()
{
    unordered_map<string, int> umap;
    umap["kfd"] == 44;
    umap["gfg"] = 56;
    umap["hemlo"] = 56;
    umap["cdf"] = 56;

    // for (auto x : umap)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }

    // umap.begin() - umap.end()
    for (auto it = umap.begin(); it != umap.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // umap.find()
    string key = "gfg";
    if (umap.find(key) != umap.end())
    {
        cout << "key found." << endl;
    }

    if (umap.find(key) != umap.end())
    {
        auto temp = umap.find(key);
        cout << "key is: " << temp->first << " and value is: " << temp->second << endl;
    }

    // umap.insert()
    umap.insert(make_pair("mobile", 17000));
    for (auto it = umap.begin(); it != umap.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // umap.erase()
    key = "kfd";
    umap.erase(key);

    // umap.size()
    cout << umap.size() << endl;

    int arr[] = {7, 1, 0, 3, 5, 0, 1, 3, 2, 5, 7, 3, 8, 9, 9};
    
    unordered_map<int, int> umaped;

    for(int i =0; i< 15; i++)
    {
        int key = arr[i];
        umaped[key]++; //increases the value of key by one
    }

}