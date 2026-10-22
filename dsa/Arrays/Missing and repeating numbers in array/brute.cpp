
#include <iostream>
#include <vector>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int>& a)
{
    int n = a.size();

    int repeating = -1;
    int missing = -1;

    // Check every number from 1 to n
    for (int num = 1; num <= n; num++)
    {
        int count = 0;

        // Count occurrences of the current number
        for (int i = 0; i < n; i++)
        {
            if (a[i] == num)
            {
                count++;
            }
        }

        // If the number appears twice, it is repeating
        if (count == 2)
        {
            repeating = num;
        }

        // If the number never appears, it is missing
        else if (count == 0)
        {
            missing = num;
        }
    }

    // Return {repeating, missing}
    return {repeating, missing};
}

int main()
{
    vector<int> a = {1, 2, 2, 4};

    vector<int> result = findMissingRepeatingNumbers(a);

    cout << "Repeating number: " << result[0] << endl;
    cout << "Missing number: " << result[1] << endl;

    return 0;
}
