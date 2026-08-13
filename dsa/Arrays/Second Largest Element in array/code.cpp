#include <iostream>
#include <vector>
using namespace std;

int secondLargest(vector<int>& nums, int n)
{
    int largest = nums[0];
    int slargest = -1;

    for(int i = 1; i < n; i++)
    {
        if(nums[i] > largest)
        {
            slargest = largest;
            largest = nums[i];
        }
        else if(nums[i] < largest && nums[i] > slargest)
        {
            slargest = nums[i];
        }
    }

    return slargest;
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int ans = secondLargest(nums, n);

    cout << "Second Largest Element = " << ans;

    return 0;
}