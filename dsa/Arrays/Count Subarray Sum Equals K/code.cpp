#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k)
{
    unordered_map<int, int> mpp;

    // Empty prefix sum
    mpp[0] = 1;

    int preSum = 0;
    int count = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        // Current prefix sum
        preSum += nums[i];

        // Prefix sum we need
        int remove = preSum - k;

        // If found, add its frequency
        if(mpp.find(remove) != mpp.end())
        {
            count += mpp[remove];
        }

        // Store current prefix sum
        mpp[preSum]++;
    }

    return count;
}

int main()
{
    vector<int> nums = {1, 2, 1, 2};
    int k = 3;

    cout << "Number of subarrays = "
         << subarraySum(nums, k);

    return 0;
}