#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& arr, int target)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == target)
        {
            return i;   // Return index if found
        }
    }

    return -1;   // Element not found
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int index = linearSearch(arr, target);

    if(index != -1)
    {
        cout << "Element found at index: " << index << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}