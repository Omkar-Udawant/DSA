class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = m + n;
        int gap = (len / 2) + (len % 2);

        auto swapIfGreater = [](vector<int>& a, vector<int>& b, int ind1, int ind2) {
            if (a[ind1] > b[ind2]) {
                swap(a[ind1], b[ind2]);
            }
        };

        auto swapIfGreaterSame = [](vector<int>& a, int ind1, int ind2) {
            if (a[ind1] > a[ind2]) {
                swap(a[ind1], a[ind2]);
            }
        };

        while (gap > 0) {
            int left = 0;
            int right = left + gap;
            
            while (right < len) {
                // arr1 and arr2
                if (left < m && right >= m) {
                    swapIfGreater(nums1, nums2, left, right - m);
                }
                // arr2 and arr2
                else if (left >= m) {
                    swapIfGreaterSame(nums2, left - m, right - m);
                }
                // arr1 and arr1
                else {
                    swapIfGreaterSame(nums1, left, right);
                }
                left++;
                right++;
            }
            
            if (gap == 1) break;
            gap = (gap / 2) + (gap % 2);
        }

        // Copy elements from nums2 back to the remaining part of nums1
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};