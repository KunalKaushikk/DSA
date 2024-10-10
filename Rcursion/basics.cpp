// Add all numbers till n (recursion and normal)
#include <bits/stdc++.h>
using namespace std;
// Normal method
//  int main()
//  {
//      int n;
//      cin >> n;
//      int temp = 0;
//      for (int i = 0; i <= n; i++)
//      {
//          temp += i;
//      }
//      cout << temp;
//  }

// Another way using function
// int sumOfall(int n)
// {
//     int temp = 0;
//     while (n != 0)
//     {
//         temp += n;
//         n--;
//     }
//     return temp;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << sumOfall(n);
// }

// Recusion

int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int prevSum = Sum(n - 1);
    return n + prevSum;
}
int main()
{
    int n;
    cin >> n;
    cout << Sum(n);
    return 0;
}