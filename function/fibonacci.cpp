#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n)
{
    int a = 0, b = 1, c;
    cout << a << " , ";
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        cout << c << " , ";
        //            swap(b,c);
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}