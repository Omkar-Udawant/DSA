#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> mpp;

    for(int i = 0; i < nums.size(); i++)
    {
        int num = nums[i];
        int needed = target - num;

        // Check if needed number already exists
        if(mpp.find(needed) != mpp.end())
        {
            return {mpp[needed], i};
        }

        // Store current number and its index
        mpp[num] = i;
    }

    return {-1, -1};
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;

    cout << "Enter target: ";
    cin >> target;

    vector<int> ans = twoSum(nums, target);

    cout << "Indices: ";

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}