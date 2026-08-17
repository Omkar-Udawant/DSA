#include <iostream>
#include <vector>
using namespace std;

// brute force approach to rotate the array by one position to the left
void rotateByOne(vector<int>& nums)
{
    int temp = nums[0];

    for(int i = 1; i < nums.size(); i++)
    {
        nums[i - 1] = nums[i];
    }

    nums[nums.size() - 1] = temp;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};

    rotateByOne(nums);

    cout << "After rotation: ";

    for(int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}