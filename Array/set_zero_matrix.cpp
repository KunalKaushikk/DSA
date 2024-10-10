#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    // Arrays to store whether the row and column should be zeroed
    vector<bool> zeroRow(n, false);
    vector<bool> zeroCol(m, false);

    // Identify rows and columns with zeros
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                zeroRow[i] = true;
                zeroCol[j] = true;
            }
        }
    }

    // Set zeros for identified rows
    for (int i = 0; i < n; i++)
    {
        if (zeroRow[i])
        {
            for (int j = 0; j < m; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }

    // Set zeros for identified columns
    for (int j = 0; j < m; j++)
    {
        if (zeroCol[j])
        {
            for (int i = 0; i < n; i++)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{
    // Example usage
    vector<vector<int>> matrix = {{7, 19, 3}, {4, 21, 0}};
    setZeros(matrix);

    // Output the modified matrix
    for (auto &row : matrix)
    {
        for (int elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
