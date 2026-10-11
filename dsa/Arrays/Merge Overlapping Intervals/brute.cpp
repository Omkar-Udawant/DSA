#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
        if (n <= 1) return arr;

        // Sort intervals by their start times
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {
            int start = arr[i][0];
            int end = arr[i][1];

            // Skip if the current interval is already part of the last merged interval in 'ans'
            if (!ans.empty() && end <= ans.back()[1]) {
                continue;
            }

            // Try to merge all subsequent overlapping intervals
            for (int j = i + 1; j < n; j++) {
                if (arr[j][0] <= end) {
                    end = max(end, arr[j][1]);
                } else {
                    break;
                }
            }
            ans.push_back({start, end});
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> result = sol.merge(intervals);

    cout << "Brute Force Merged Intervals:" << endl;
    for (const auto& interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;
    return 0;
}