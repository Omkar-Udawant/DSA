class Solution {
public:
    void nextPermutation(vector<int>& A) {

        int ind = -1;
        int n = A.size();

        // Step 1: Find breakpoint
        for(int i = n - 2; i >= 0; i--)
        {
            if(A[i] < A[i + 1])
            {
                ind = i;
                break;
            }
        }

        // If no breakpoint exists
        if(ind == -1)
        {
            reverse(A.begin(), A.end());
            return;
        }

        // Step 2: Find next greater element from right
        for(int i = n - 1; i > ind; i--)
        {
            if(A[i] > A[ind])
            {
                swap(A[i], A[ind]);
                break;
            }
        }

        // Step 3: Reverse the right half
        reverse(A.begin() + ind + 1, A.end());
    }
};