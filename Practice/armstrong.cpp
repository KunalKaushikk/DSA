#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int armstrong = 0;
    int original = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        armstrong += pow(lastdigit, 3);
        n = n / 10;
    }
    if (armstrong == original)
    {
        cout << original << " is armstrong";
    }
    else
    {
        cout << original << " is not armstrong";
    }
    return 0;
}
