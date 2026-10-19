#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((long long)nums[i] > 2LL * nums[j]) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 2, 3, 1};
    cout << "Reverse Pairs (Brute Force): " << sol.reversePairs(nums) << endl;
    return 0;
}