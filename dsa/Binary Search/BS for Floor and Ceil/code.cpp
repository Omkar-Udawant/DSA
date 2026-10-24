#include <bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int>& arr, int x) {
    int n = arr.size();

    int floorValue = -1;
    int ceilValue = -1;

    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            floorValue = arr[mid];
            ceilValue = arr[mid];
            break;
        }

        else if (arr[mid] < x) {
            floorValue = arr[mid]; // possible floor
            low = mid + 1;
        }

        else {
            ceilValue = arr[mid]; // possible ceil
            high = mid - 1;
        }
    }

    return {floorValue, ceilValue};
}

int main() {
    vector<int> arr = {1, 2, 4, 6, 8};
    int x = 5;

    pair<int, int> ans = getFloorAndCeil(arr, x);

    cout << "Floor: " << ans.first << endl;
    cout << "Ceil: " << ans.second << endl;

    return 0;
}