#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> v1;
    for (auto i = 0; i <= 5; ++i)
    {
        cin >> n;
        v1.push_back(n);
    }
    for (int i = 0; i <= 5; i++)
    {
        cout << v1[i] << " ";
    }
}