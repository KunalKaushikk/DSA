#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}
void quick(int arr[], int l, int r)
{
    if (l < r)
    {
        // We can decide pivot as any number, let say last
        int pivot = partition(arr, l, r);
        quick(arr, l, pivot - 1);
        quick(arr, pivot + 1, r);
    }
}
int main()
{
    int arr[7] = {6, 3, 9, 5, 2, 8, 7};
    quick(arr, 0, 6);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}