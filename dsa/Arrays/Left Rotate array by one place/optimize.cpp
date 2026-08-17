#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//BETTER APPROACH TO ROTATE THE ARRAY BY D POSITIONS TO THE LEFT
void leftRotate(vector<int>& nums, int d)
{
   reverse(nums.begin(), nums.begin() + d);
   reverse(nums.begin() + d, nums.end());
   reverse(nums.begin(), nums.end());
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

    int d;
    cout << "Enter number of rotations: ";
    cin >> d;

    leftRotate(nums, d);

    cout << "Array after left rotation: ";

    for(int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}