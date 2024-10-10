#include <bits/stdc++.h>
using namespace std;

// Move all x to end of the string

string moveToend(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = moveToend(s.substr(1));
    if (ch == 'x')
    {
        return (ans + ch);
    }
    return (ch + ans);
}
int main()
{
    cout << moveToend("axxbdxcefxhix");
    return 0;
}