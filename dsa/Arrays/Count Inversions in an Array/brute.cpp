
#include <iostream>
#include <vector>
using namespace std;

long long countInversions(vector<int>& arr)
{
    int n = arr.size();
    long long count = 0;

    // Check every possible pair (i, j)
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // An inversion exists if the earlier element is greater
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    vector<int> arr = {5, 3, 2, 4, 1};

    cout << "Number of inversions: "
         << countInversions(arr) << endl;

    return 0;
}
