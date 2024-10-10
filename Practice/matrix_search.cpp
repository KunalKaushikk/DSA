#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int arr[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the element to search... ";

    // This takes m*n time, let's short this, given that all rows are in sorted order...
    // int x;
    // cin >> x;
    // bool found = false;
    // for (int i = 0; i < n1 && !found; i++)
    // {
    //     for (int j = 0; j < n2 && !found; j++)
    //     {
    //         if (arr[i][j] == x)
    //             found = true;
    //     }
    // }
    // return found;
    int target;
    cin >> target;
    int r = 0, c = n2 - 1;
    bool found = false;
    while (r < n1 and c >= 0)
    {
        if (arr[r][c] == target)
        {
            found = true;
        }
        if (arr[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Doesn't exist";
    }
}