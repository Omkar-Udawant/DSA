#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums)
{
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while(mid <= high)
    {
        if(nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements (0,1,2): ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sortColors(nums);

    cout << "Sorted Array: ";

    for(int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}
