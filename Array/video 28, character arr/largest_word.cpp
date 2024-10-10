#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Largest word in a sentence
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    // Sentence input
    cin.getline(arr, n);
    int i = 0;
    int curLen = 0, maxLen = 0;
    int st = 0, maxst = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (curLen > maxLen)
            {
                maxLen = curLen;
                maxst = st;
            }
            curLen = 0;
            st = i + 1;
        }
        else
        {
            curLen++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << "Max Length is: " << maxLen << endl;
    for (int i = 0; i < maxLen; i++)
    {
        cout << arr[i + maxst];
    }
}