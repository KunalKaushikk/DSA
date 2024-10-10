#include <bits/stdc++.h>
using namespace std;

// How many possible ways to reach start to end on a dice
// Ex 0-1-2-3,start=0, end=3, total ways=4; 0-3,0-1-3,0-2-3,0-1-2-3

int total_path(int start, int end)
{
    if (start == end)
    {
        return 1;
    }
    if (start > end)
    {
        return 0;
    }
    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        count += total_path(start + i, end);
    }
    return count;
}

int main()
{
    cout << total_path(0, 3) << endl;
    return 0;
}