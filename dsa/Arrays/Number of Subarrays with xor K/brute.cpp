#include <iostream>
#include <vector>
using namespace std;

int subarraysWithXorK(vector<int>& nums, int k)
{
    int n = nums.size();
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int xr = 0;

            for(int l = i; l <= j; l++)
            {
                xr = xr ^ nums[l];
            }

            if(xr == k)
            {
                count++;
            }
        }
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