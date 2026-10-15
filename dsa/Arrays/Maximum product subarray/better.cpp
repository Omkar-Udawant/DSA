
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int maxProduct(vector<int>& nums)
{
    int n = nums.size();
    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int product = nums[i];
        ans = max(ans, product);

        for (int j = i + 1; j < n; j++)
        {
            product *= nums[j];
            ans = max(ans, product);
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {-2, 3, -4};

    cout << "Maximum product: " << maxProduct(nums);

    return 0;
}
