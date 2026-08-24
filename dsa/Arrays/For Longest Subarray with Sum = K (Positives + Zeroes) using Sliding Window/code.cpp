#include <iostream>
#include <vector>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int k)
{
    int left = 0;              // Left pointer of window
    int right = 0;             // Right pointer of window

    int sum = arr[0];          // Current window sum
    int maxLen = 0;            // Stores maximum length found

    int n = arr.size();

    while(right < n)
    {
        // If sum becomes greater than k,
        // shrink window from left side
        while(left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }

        // If current window sum equals k
        if(sum == k)
        {
            maxLen = max(maxLen,
                         right - left + 1);
        }

        // Expand window
        right++;

        // Add next element to window
        if(right < n)
        {
            sum += arr[right];
        }
    }

    return maxLen;
}

int main()
{
    vector<int> arr = {1,2,1,1,1};
    int k = 3;

    cout << longestSubarrayWithSumK(arr, k);

    return 0;
}