#include <bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>>& matrix, int row, int n)
{
    for(int j = 0; j < n; j++)
    {
        if(matrix[row][j] != 0)
            matrix[row][j] = -1;
    }
}

void markCol(vector<vector<int>>& matrix, int col, int m)
{
    for(int i = 0; i < m; i++)
    {
        if(matrix[i][col] != 0)
            matrix[i][col] = -1;
    }
}

void setZeroes(vector<vector<int>>& matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] == 0)
            {
                markRow(matrix, i, n);
                markCol(matrix, j, m);
            }
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] == -1)
                matrix[i][j] = 0;
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

    for(auto row : matrix)
    {
        for(auto x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}