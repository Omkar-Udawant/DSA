#include <iostream>
#include <vector>
using namespace std;

// Rearrange positives and negatives alternately
vector<int> rearrangeArray(vector<int>& nums)
{
    int n = nums.size();

    vector<int> ans(n, 0);

    int posIndex = 0; // Even indices
    int negIndex = 1; // Odd indices

    for(int i = 0; i < n; i++)
    {
        if(nums[i] < 0)
        {
            ans[negIndex] = nums[i];
            negIndex += 2;
        }
        else
        {
            ans[posIndex] = nums[i];
            posIndex += 2;
        }
    }

    return ans;
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

    vector<int> ans = rearrangeArray(nums);

    cout << "Rearranged Array: ";

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}