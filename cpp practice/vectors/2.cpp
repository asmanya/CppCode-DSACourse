#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> test(vector<int> nums)
{
    vector<int> temp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0 && nums[i] < nums[i + 1])
        {
            temp.push_back(nums[i]);
        }
        else if (i == nums.size() - 1 && nums[i] < nums[i - 1])
        {
            temp.push_back(nums[i]);
        }
        else if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1])
        {
            temp.push_back(nums[i]);
        }
    }
    return temp;
}

int main()
{
    vector<int> nums = {1, 2, 5, 0, 3, 1, 7};

    vector<int> result = test(nums);

    cout << "Elements that are strictly smaller than their adjacent left and right neighbours are: ";

    for (int y : result)
    {
        cout << y << " ";
    }

    return 0;
}