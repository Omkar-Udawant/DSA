#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums)
{
    int n = nums.size();

    set<vector<int>> st;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            for(int k = j + 1; k < n; k++)
            {
                if(nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> temp = {
                        nums[i],
                        nums[j],
                        nums[k]
                    };

                    // Sort triplet so duplicates look identical
                    sort(temp.begin(), temp.end());

                    // Set automatically removes duplicate triplets
                    st.insert(temp);
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());

    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = threeSum(nums);

    cout << "Triplets:\n";

    for(auto triplet : ans)
    {
        cout << "[ ";

        for(int x : triplet)
        {
            cout << x << " ";
        }

        cout << "]\n";
    }

    return 0;
}