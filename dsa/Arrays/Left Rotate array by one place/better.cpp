#include <iostream>
#include <vector>
using namespace std;
//BETTER APPROACH TO ROTATE THE ARRAY BY D POSITIONS TO THE LEFT
void leftRotate(vector<int>& nums, int d)
{
    int n = nums.size();

    d = d % n;

    vector<int> temp(d);

    // Store first d elements
    for(int i = 0; i < d; i++)
    {
        temp[i] = nums[i];
    }

    // Shift remaining elements to left
    for(int i = d; i < n; i++)
    {
        nums[i - d] = nums[i];
    }

    // Copy temp elements at end
    for(int i = n - d; i < n; i++)
    {
        nums[i] = temp[i - (n - d)];
    }
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