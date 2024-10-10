#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int count = 0;
    int ind = (start + end) / 2; // We have taken pivot as middle element, we can choose any
    int pivot = arr[ind];
    if (start == 0)
        return -1; // base case
    else if (start > end)
    {
        return -1;
    }
    else
    {
        for (int i = start; i < ind; i++)
        {
            if (arr[i] <= pivot)
            {
                count++;
            }
        }
        int temp = count;
        for (int i = ind + 1; i < end; i++)
        {
            if (arr[i] <= pivot)
            {
                temp++;
            }
        }
        int pivotIndex = ind + temp;
    }
}