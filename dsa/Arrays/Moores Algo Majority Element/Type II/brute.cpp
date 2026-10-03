#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int>& nums)
{
    int n = nums.size();
    vector<int> ans;

    for(int i = 0; i < n; i++)
    {
        if(ans.size() == 0 || ans[0] != nums[i])
        {
            int count = 0;

            for(int j = 0; j < n; j++)
            {
                if(nums[j] == nums[i])
                {
                    count++;
                }
            }

            if(count > n / 3)
            {
                ans.push_back(nums[i]);
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {3,2,3};

    vector<int> ans = majorityElement(nums);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}