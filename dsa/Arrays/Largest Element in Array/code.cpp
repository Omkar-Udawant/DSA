#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int>& nums, int n)
{
    int largest = nums[0];

    for(int i = 1; i < n; i++)
    {
        if(nums[i] > largest)
        {
            largest = nums[i];
        }
    }

    return largest;
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

    int ans = largestElement(nums, n);

    cout << "Largest Element = " << ans;

    return 0;
}