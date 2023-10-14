#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> q = {1, {3, 4}};

    cout << q.first << " " << q.second.first << " " << q.second.second;

    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};

    cout << arr[1].second;
}

void explainVector()
{
    vector<int> v; // dynamic in nature

    // used for insertion
    v.push_back(1);
    v.emplace_back(2); // faster than push_back

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2); // no need of curly braces

    vector<int> v{5}; // 0 0 0 0 0

    vector<int> v{5, 100}; // 100 100 100 100 100

    vector<int> v1{5, 20};
    vector<int> v2{v1}; // v2 will be a copy of v1

    vector<int>::iterator it = v.begin(); // syntax for iterator
    // iterator points to the memory address
    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    // auto assign for datatype
    // vector<int>::iterator can be simply replaced by auto
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    // for each loop
    for (auto it : v)
    {
        cout << it << " ";
    }

    // {10, 20, 30 ,40 ,50}
    // this will delete 20
    v.erase(v.begin() + 1);

    // for deleting a range of elements, fill starting and ending address
    v.erase(v.begin() + 2, v.begin() + 4);
    // this deletes 30, 40

    // insert function
    vector<int> v{2, 100};          // {100 ,100}
    v.insert(v.begin(), 300);       // {300, 100 ,100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy{2, 50};
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}
    // one vector to another vector - position, start, end

    cout << v.size(); // no of elements
    v.pop_back();     // pops last element
    v1.swap(v2);      // swaping elements
    v.clear();        // trims down to empty vector

    cout << v.empty(); // retruns whether vector is empty or not
}

void explainList()
{
    list<int> ls;
    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2, 4}
    ls.push_front(5);   // {5, 2, 4}
    ls.emplace_front();

    // rest functions same as vector
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     // {1}
    dq.emplace_back(2);  // {1, 2}
    dq.push_front(4);    // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back();  // {3, 4, 1}
    dq.pop_front(); // {4, 1}

    dq.back();
    dq.front();
}

void explainStack()
{
    // follows LIFO - last in first out
    stack<int> st;
    st.push(1);    // {1}
    st.push(3);    // {1, 3}
    st.push(3);    // {1, 3, 3}
    st.push(4);    // {1, 3, 3, 4}
    st.emplace(5); // {1, 3, 3, 4, 5}

    cout << st.top(); // prints 5
    st.pop();

    cout << st.top();   // 4
    cout << st.size();  // 4
    cout << st.empty(); // false

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue()
{
    // follows FIFO
    deque<int> q;
    q.push_back(1);    // {1}
    q.push_back(2);    // {1, 2}
    q.emplace_back(4); // {1, 2, 4}

    q.back() += 5;
    cout << q.back();  // prints 9
    cout << q.front(); // prints 1
    cout << q.front();
}

void explainPQ()
{
    // max heap
    priority_queue<int> pq;
    pq.push(5);     // {5}
    pq.push(2);     // {5, 2}
    pq.push(8);     // {5, 2, 8}
    pq.emplace(10); // {5, 2, 8, 10}

    cout << pq.top(); // prints 10
    pq.pop();         // {5, 2, 8}
    cout << pq.top(); // prints 8

    // minimum heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);     // {5}
    pq.push(2);     // {2, 5}
    pq.push(8);     // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2
}

void explainSet()
{
    // store everything in sorted order and is unique
    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1, 2}
    st.insert(2);  // {1, 2}
    st.insert(4);  // {1, 2, 4}
    st.insert(3);  // {1, 2, 3, 4}

    auto it = st.find(3);
    auto it = st.find(6); // if an element is not in set, it returns set.end()

    st.erase(5); // erases 5, takes log n time

    int cnt = st.count(1); // gives either 1 or 0

    auto it = st.find(3);
    st.erase(it); // it takes constatn time

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // {1, 2, 4}

    // lower_bound() and upper_bound() functions works in same way.
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

void multiSet()
{
    // everything in sorted order, but may not be unique
    multiset<int> ms;

    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1s erased

    int cnt = ms.count(1);

    // deletes only single element
    ms.erase(ms.find(1));
}

void explainedUSet()
{
    unordered_set<int> st;
    // similar to set, stores unique, doesnt store in sorted way
    // all operations are same but lower and upper bound case dont work
    // O(1) but the worst case may be O(n)
}

void explainMap()
{
    map<int, int> mpp;

    map<int, pair<int, int>> mpp;

    map<pair<int, int>, int> mpp;

    // key value pairs - keys are unique in sorted order
    // values might be duplicate
    // key can be any data type

    mpp[1] = 2; // on key 1, store 2

    mpp.insert({2, 4});

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1]; // the value at 1
    cout << mpp[5];

    auto it = mpp.find(3);
    // cout << *(it).second;

    auto it = mpp.find(5); // if not found, it goes to mpp.end()
}

void multimap()
{
    // everything same to map, it can store duplicate keys in sorted order
    // only mpp[key] can not be used here
}

void unorderedMap()
{
    // unique keys but will not be sorted
    // O(1) but worst case is O(n)
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    else if (p1.second == p2.second)
    {
        if (p1.first > p2.first)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

void explainExtra()
{
    int a, n;
    vector<int> v;

    sort(a, a + n);           // arrays
    sort(v.begin(), v.end()); // vectors
    sort(a + 2, a + 4);       // 2nd and 3rd will be sorted

    sort(a, a + n /*, greater<int>*/); // sorts in descending order
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // sort it acc to the second element
    // if second element is same, then sort it according to first element but in descending

    sort(a, a + n /*, comp*/); // comp is self written comparator
    // basically it is a boolean func
<<<<<<< HEAD
=======

>>>>>>> newChanges1
}

int main()
{

    return 0;
}