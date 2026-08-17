#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums)
{
    vector<int> temp;

    // Store non-zero elements
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] != 0)
        {
            temp.push_back(nums[i]);
        }
    }

    // Copy non-zero elements back
    for(int i = 0; i < temp.size(); i++)
    {
        nums[i] = temp[i];
    }

    // Fill remaining positions with 0
    for(int i = temp.size(); i < nums.size(); i++)
    {
        nums[i] = 0;
    }
}

int main()
{
    vector<int> nums = {1,0,2,3,0,4,0,1};

    moveZeroes(nums);

    for(int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}