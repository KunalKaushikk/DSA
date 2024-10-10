#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n)
{
    int maxx = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxx = max(maxx, arr[i]);
    }
    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i <= maxx; i++)
    {
        count[i] += count[i - 1];
    }
    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}
int main()
{
    int arr[7] = {1, 5, 4, 2, 3, 1, 7};
    countSort(arr, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}