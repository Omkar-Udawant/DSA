#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums)
{
    int n = nums.size();

    if(n == 0)
        return 0;

    unordered_set<int> st;

    // Store all elements in the set
    for(int i = 0; i < n; i++)
    {
        st.insert(nums[i]);
    }

    int longest = 1;

    // Traverse the set
    for(auto num : st)
    {
        // Check if current number is the start of a sequence
        if(st.find(num - 1) == st.end())
        {
            int currentNum = num;
            int count = 1;

            // Count consecutive elements
            while(st.find(currentNum + 1) != st.end())
            {
                currentNum++;
                count++;
            }

            longest = max(longest, count);
        }
    }

    return longest;
}

int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    cout << "Longest Consecutive Sequence Length = "
         << longestConsecutive(nums);

    return 0;
}