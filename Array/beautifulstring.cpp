#include <bits/stdc++.h>
using namespace std;

vector<int> beautiful(vector<int> &arr)
{
    vector<int> res;
    int n = arr.size();
    int k = n / 3;
    unordered_map<int, int> count;
    for (int num : arr)
    {
        count[num]++;
    }
    for (auto it : count)
    {
        if (it.second > k)
        {
            res.push_back(it.first);
        }
    }
    return res;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> result = beautiful(arr);
        for (int num : result)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}