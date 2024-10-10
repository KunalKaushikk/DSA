#include <bits/stdc++.h>
#include <vector>

using namespace std;

bool myCom(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    int arr[] = {4, 7, 2, 6, 1, 0, 5, 3};
    vector<pair<int, int>> v;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        v.push_back(make_pair(arr[i], i));
        pair<int, int> p;
        p.first = arr[i];
        p.second = i;
    }
    sort(v.begin(), v.end(), myCom);

    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}