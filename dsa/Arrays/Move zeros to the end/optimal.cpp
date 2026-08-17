#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums)
{
    int j = -1;

    // Find first zero
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == 0)
        {
            j = i;
            break;
        }
    }

    if(j == -1)
        return;

    // Move non-zero elements forward
    for(int i = j + 1; i < nums.size(); i++)
    {
        if(nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
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