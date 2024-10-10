#include <bits/stdc++.h>
using namespace std;

int decimalTObin(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;
    while (n > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 2;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << decimalTObin(n);
    return 0;
}