#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> leaders(vector<int>& nums)
{
    vector<int> ans;

    int n = nums.size();
    int maxi = INT_MIN;

    // Traverse from right to left
    for(int i = n - 1; i >= 0; i--)
    {
        if(nums[i] > maxi)
        {
            ans.push_back(nums[i]);
            maxi = nums[i];
        }
    }

    // Reverse because leaders were added from right to left
    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    vector<int> nums = {10, 22, 12, 3, 0, 6};

    vector<int> result = leaders(nums);

    cout << "Leaders: ";

    for(int x : result)
    {
        cout << x << " ";
    }

    return 0;
}