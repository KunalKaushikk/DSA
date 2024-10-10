#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int ans = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        ans += ans * 10 + lastdigit;
        n /= 10;
    }
    return ans;
}
int addBinary(int num1, int num2)
{
    int ans;
    int prevcarry = 0;
    while (num1 > 0 && num2 > 0)
    {
        if (num1 % 2 == 0 && num2 % 2 == 0)
        {
            ans = ans * 10 + prevcarry;
            prevcarry = 0;
        }
        else if ((num1 % 2 == 0 && num2 % 2 == 1) || (num1 % 2 == 1 && num2 % 2 == 0))
        {
            if (prevcarry == 1)
            {
                ans = ans * 10 + 0;
                prevcarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevcarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + prevcarry;
            prevcarry = 1;
        }
        num1 /= 10;
        num2 /= 10;
    }

    while (num1 > 0)
    {
        if (prevcarry == 1)
        {
            if (num1 % 2 == 1)
            {
                ans = ans * 10 + 0;
                prevcarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevcarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (num1 % 2);
        }
        num1 /= 10;
    }
    while (num2 > 0)
    {
        if (prevcarry == 1)
        {
            if (num2 % 2 == 1)
            {
                ans = ans * 10 + 0;
                prevcarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevcarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (num1 % 2);
        }
        num2 /= 10;
    }
    if (prevcarry == 1)
    {
        ans = ans * 10 + 1;
    }
    ans = reverse(ans);
    return ans;
}
int main()
{
    int num1, num2;
    cout << "Enter 2 binary numbers to add" << endl;
    cin >> num1 >> num2;

    cout << addBinary(num1, num2) << endl;
}