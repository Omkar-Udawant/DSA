#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums)
{
    int xr = 0;

    for(int num : nums)
    {
        xr ^= num;
    }

    return xr;
}

int main()
{
    vector<int> nums = {4,1,2,1,2};

    cout << "Single Number = "
         << singleNumber(nums);

    return 0;
}