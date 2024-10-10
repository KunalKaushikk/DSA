#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j;
    cin >> i >> j;
    int arr[i][j];
    for (int l = 0; l < i; l++)
    {
        for (int m = 0; m < j; m++)
        {
            cin >> arr[l][m];
        }
    }
    int k;
    cin >> k;
    int arr2[j][k];
    for (int l = 0; l < j; l++)
    {
        for (int m = 0; m < k; m++)
        {
            cin >> arr2[l][m];
        }
    }
    int ans[i][k];
    // Multiplication
    for (int l = 0; l < i; l++)
    {
        for (int m = 0; m < k; m++)
        {
            for (int n = 0; n < j; n++)
            {
                ans[l][m] = arr[l][n] * arr2[n][m];
            }
        }
    }
    for (int l = 0; l < i; l++)
    {
        for (int m = 0; m < k; m++)
        {
            cout << ans[l][m] << " ";
        }
        cout << endl;
    }
    return 0;
}