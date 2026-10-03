#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> majorityElement(vector<int>& nums)
{
    int n = nums.size();

    unordered_map<int,int> mpp;

    for(int i = 0; i < n; i++)
    {
        mpp[nums[i]]++;
    }

    vector<int> ans;

    for(auto it : mpp)
    {
        if(it.second > n/3)
        {
            ans.push_back(it.first);
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {1,1,1,3,3,2,2,2};

    vector<int> ans = majorityElement(nums);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}