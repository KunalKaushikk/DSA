#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int *aa=&a and int *aa; aa=&a are same
    // int a = 10;
    // int *aa = &a;
    // cout << a << endl;
    // cout << *aa << endl;
    // cout << aa << endl;
    // cout << &a << endl;
    // cout << &aa;

    // double pointer
    // int a = 10;
    // int *p;
    // p = &a;

    // int **q = &p;
    // cout << p << endl;
    // cout << *p << endl;
    // cout << *q << endl;
    // cout << **q << endl;
    // cout << q << endl;

    // call by value
    // int a, b;
    // a = 10, b = 20;
    // int *aptr = &a;
    // int *bptr = &b;
    // cout << aptr << " " << bptr << endl;
    // swap(a, b);
    // cout << "After swapping: " << endl;
    // cout << "a=" << a << "\n";
    // cout << "b=" << b << endl;
    // cout << aptr << " " << bptr;

    // call by reference
    int a = 10;
    int b = 20;
    int *aptr = &a;
    int *bptr = &b;

    swap(*aptr, *bptr);
    cout << a << " " << b;
    return 0;
}