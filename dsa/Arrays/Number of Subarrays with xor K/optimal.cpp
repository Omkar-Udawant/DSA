//leetcode logic
int subarraysWithSum(vector<int>a,int k)
{
    int xr = 0;
    map<int,int>mpp;
    mpp[xr]++;//{0,1}
    int cnt = 0;
    for(int i =0;i<a.size();i++)
    {
        xr = xr ^ a[i];
        //k
        int x = xr ^ k;
        //formula
        cnt += mpp[x];
        mpp[xr]++;
    }

    return cnt;

}
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraysWithXorK(vector<int>& nums, int k)
{
    int n = nums.size();

    unordered_map<int, int> mpp;

    int xr = 0;
    int count = 0;

    // Empty prefix: XOR 0 has appeared once
    mpp[0] = 1;

    for(int i = 0; i < n; i++)
    {
        // Calculate current prefix XOR
        xr = xr ^ nums[i];

        // Required previous prefix XOR
        int x = xr ^ k;

        // Count subarrays ending at i
        if(mpp.find(x) != mpp.end())
        {
            count += mpp[x];
        }

        // Store frequency of current prefix XOR
        mpp[xr]++;
    }

    return count;
}

int main()
{
    vector<int> nums = {4, 2, 2, 6, 4};
    int k = 6;

    cout << "Number of subarrays: "
         << subarraysWithXorK(nums, k);

    return 0;
}