#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateMatrix(vector<vector<int>>& matrix)
{
    int n = matrix.size();

    // Step 1: Transpose
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for(int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    vector<vector<int>> matrix =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    rotateMatrix(matrix);

    cout << "Rotated Matrix:\n";

    for(auto row : matrix)
    {
        for(auto x : row)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}