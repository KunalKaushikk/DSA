/*An arithmetic array is an array that contains at least two integers and the differences
between consecutive integers are equal. For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are
arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 41 are not arithmetic arrays.
Sarasvati has an array of N non-negative integers. The i-th integer of the array is Ac She
wants to choose a contiguous arithmetic subarray from her array that has the maximum
length. Please help her to determine the length of the longest contiguous arithmetic
subarray.


Input:
The first line of the input gives the number of test cases, T. T test cases follow. Each test
case begins with a line containing the integer N. The second line contains N integers. The
i-th integer is Ac
Output:
For each test case, output one line containing Case #x: y, where x is the test case number
(starting from 1) and y is the length of the longest contiguous arithmetic subarray.*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;

    while (a > 0)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 2; // minimum length will be 2
        int prev_df = arr[1] - arr[0];
        int current_len = 2;
        int j = 2;
        while (j < n)
        {
            if (prev_df == arr[j] - arr[j - 1])
                current_len++;
            else
            {
                prev_df = arr[j] - arr[j - 1];
                current_len = 2;
            }
            ans = max(ans, current_len);
            j++;
        }
        cout << ans;
        return 0;
    }
}