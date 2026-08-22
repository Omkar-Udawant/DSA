#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums)
{
    int xor1 = 0;
    int xor2 = 0;

    int n = nums.size();

    for(int i = 0; i < n; i++)
    {
        xor1 ^= (i + 1);
        xor2 ^= nums[i];
    }

    return xor1 ^ xor2;
}

int main()
{
    vector<int> nums = {3, 0, 1};

    cout << "Missing Number = "
         << missingNumber(nums);

    return 0;
}
