#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[100], position, n, value;
    cout << "Enter number of elements in array\n"
         << endl;
    cin >> n;
    cout << "Enter elements\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the location where you wish to insert an element\n"
         << endl;
    cin >> position;
    cout << "Enter the value to insert\n"
         << endl;
    cin >> value;

    // Shift the position by one after the new element index
    for (int i = n - 1; i >= position - 1; i--)
    {
        array[i + 1] = array[i];
    }
    array[position - 1] = value;
    cout << "Resultant array is\n"
         << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}