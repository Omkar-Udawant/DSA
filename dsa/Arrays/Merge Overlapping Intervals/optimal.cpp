#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
        if (n <= 1) return arr;

        // Sort intervals based on starting times
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {
            // If 'ans' is empty or current interval does not overlap with the last merged one
            if (ans.empty() || arr[i][0] > ans.back()[1]) {
                ans.push_back(arr[i]);
            } 
            else {
                // If there is an overlap, merge by updating the end time
                ans.back()[1] = max(ans.back()[1], arr[i][1]);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> result = sol.merge(intervals);

    cout << "Optimal Merged Intervals:" << endl;
    for (const auto& interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;
    return 0;
}