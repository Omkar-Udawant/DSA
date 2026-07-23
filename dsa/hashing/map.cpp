#include <iostream>
#include <map>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }


    int q;
    cin >> q;

    while (q--) {
        int number;
        cin >> number;

        // Fetch
        cout << mpp[number] << endl;
    }

    return 0;
}