#include <bits/stdc++.h>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }
    int row = x;
    int col = y;
    while (x >= 0 && y >= 0)
    {
        if (arr[x][y] == 1)
        {
            return false;
        }
        x--;
        y--;
    }
    row = x;
    col = y;
    while (x >= 0 && y < n)
    {
        if (arr[x][y] == 1)
        {
            return false;
        }
        x--;
        y++;
    }
    return true;
}
bool n_queen(int **arr, int x, int n)
{
    if (x >= n)
    {
        return true;
    }
    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1;
            if (n_queen(arr, x + 1, n))
            {
                return true;
            }
            arr[x][col] = 0; // Backtracking
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    if (n_queen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}