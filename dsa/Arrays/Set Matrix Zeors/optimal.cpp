#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    int col0 = 1;

    // Step 1: Mark rows and columns
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(matrix[i][j] == 0)
            {
                matrix[i][0] = 0;

                if(j != 0)
                {
                    matrix[0][j] = 0;
                }
                else
                {
                    col0 = 0;
                }
            }
        }
    }

    // Step 2: Traverse from bottom-right
    for(int i = n - 1; i >= 0; i--)
    {
        for(int j = m - 1; j >= 1; j--)
        {
            if(matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }

        if(col0 == 0)
        {
            matrix[i][0] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> matrix =
    {
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };

    setZeroes(matrix);

    cout << "Result Matrix:\n";

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