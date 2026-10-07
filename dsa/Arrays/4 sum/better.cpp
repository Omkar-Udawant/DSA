#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target)
{
    int n = nums.size();

    set<vector<int>> st;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            unordered_set<long long> hashset;

            for(int k = j + 1; k < n; k++)
            {
                long long fourth =
                (long long)target -
                nums[i] -
                nums[j] -
                nums[k];

                if(hashset.find(fourth) != hashset.end())
                {
                    vector<int> temp =
                    {
                        nums[i],
                        nums[j],
                        nums[k],
                        (int)fourth
                    };

                    sort(temp.begin(), temp.end());

                    st.insert(temp);
                }

                hashset.insert(nums[k]);
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());

    return ans;
}

int main()
{
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;

    vector<vector<int>> ans = fourSum(nums, target);

    for(auto v : ans)
    {
        cout << "[ ";
        for(int x : v) cout << x << " ";
        cout << "]\n";
    }
}