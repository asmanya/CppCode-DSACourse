#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool test(vector<int> nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i + 1] != (nums[i] + 1))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> nums = {1, 2, 5, 7, 4, 3, 6};
    vector<int> nums2 = {1, 2, 3, 4, 5, 6, 7};
    for (int x : nums)
    {
        cout << x << " ";
    }

    cout << "\nCheck consecutive numbers in vector: " << test(nums) << endl;
    cout << "Check consecutive numbers in vector: " << test(nums2) << endl;

    return 0;
}