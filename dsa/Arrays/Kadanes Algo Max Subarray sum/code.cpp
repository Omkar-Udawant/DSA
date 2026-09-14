#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Kadane's Algorithm
int maxSubArray(vector<int>& arr)
{
    int maxi = INT_MIN; // Stores maximum subarray sum
    int sum = 0;        // Running sum

    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i]; // Add current element

        // Update maximum sum if current sum is greater
        maxi = max(maxi, sum);

        // If sum becomes negative, reset it
        if(sum < 0)
        {
            sum = 0;
        }
    }

    return maxi;
}

int main()
{
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};

    cout << "Maximum Subarray Sum = "
         << maxSubArray(arr);

    return 0;
}