#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n + 1];

    cin >> arr;
    bool check = 1; // 1, true anything we can use
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i]) // char array is 1 large and it'll check all from start and end
        {
            check = 0;
            break;
        }
    }
    if (check == true)
    {
        cout << "Word is a palindrome" << endl;
    }
    else
    {
        cout << "Not a palindrome" << endl;
    }
    return 0;
}