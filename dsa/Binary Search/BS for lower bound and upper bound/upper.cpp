int upperBound(vector<int>& arr, int x, int n) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > x) {
            ans = mid;       // possible answer
            high = mid - 1;  // search for smaller index
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}