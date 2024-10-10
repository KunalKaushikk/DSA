#include <bits/stdc++.h>
using namespace std;
// Smallest index repeating element
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    const int N = 1e6 + 2;
    int index[N];
    int minindx = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        index[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (index[arr[i]] != -1)
        {
            minindx = min(minindx, index[arr[i]]);
        }
        else
        {
            index[arr[i]] = i;
        }
    }
    if (minindx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minindx << endl;
    }
    return 0;
}