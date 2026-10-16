
#include <iostream>
#include <vector>
using namespace std;

// Merge two sorted halves and count cross-inversions
long long merge(vector<int>& arr, int low, int mid, int high)
{
    vector<int> temp;

    int i = low;       // Pointer for left half
    int j = mid + 1;   // Pointer for right half

    long long count = 0;

    // Merge both halves in sorted order
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            // No inversion with arr[j]
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            // arr[i] > arr[j]
            // All remaining left-half elements are greater than arr[j]
            temp.push_back(arr[j]);
            count += (mid - i + 1);
            j++;
        }
    }

    // Copy any remaining elements from the left half
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    // Copy any remaining elements from the right half
    while (j <= high)
    {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy the sorted elements back into the original array
    for (int k = 0; k < (int)temp.size(); k++)
    {
        arr[low + k] = temp[k];
    }

    return count;
}

// Divide the array and count inversions recursively
long long mergeSort(vector<int>& arr, int low, int high)
{
    long long count = 0;

    if (low >= high)
        return count;

    int mid = low + (high - low) / 2;

    // Count inversions in the left half
    count += mergeSort(arr, low, mid);

    // Count inversions in the right half
    count += mergeSort(arr, mid + 1, high);

    // Count inversions between the two halves
    count += merge(arr, low, mid, high);

    return count;
}

int main()
{
    vector<int> arr = {5, 3, 2, 4, 1};

    long long result = mergeSort(arr, 0, arr.size() - 1);

    cout << "Number of inversions: " << result << endl;

    cout << "Sorted array: ";
    for (int x : arr)
        cout << x << " ";

    cout << endl;

    return 0;
}
