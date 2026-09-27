#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& mat)
{
    int n = mat.size();
    int m = mat[0].size();

    int left = 0;
    int right = m - 1;
    int top = 0;
    int bottom = n - 1;

    vector<int> ans;

    while(top <= bottom && left <= right)
    {
        // Left -> Right
        for(int i = left; i <= right; i++)
        {
            ans.push_back(mat[top][i]);
        }
        top++;

        // Top -> Bottom
        for(int i = top; i <= bottom; i++)
        {
            ans.push_back(mat[i][right]);
        }
        right--;

        // Right -> Left
        if(top <= bottom)
        {
            for(int i = right; i >= left; i--)
            {
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        // Bottom -> Top
        if(left <= right)
        {
            for(int i = bottom; i >= top; i--)
            {
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }

    return ans;
}

int main()
{
    int n, m;

    cout << "Enter rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));

    cout << "Enter matrix elements:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    vector<int> ans = spiralOrder(mat);

    cout << "Spiral Order: ";

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}