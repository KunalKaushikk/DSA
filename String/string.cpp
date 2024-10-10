#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s;
    // cin >> s;
    // cout << s;

    // string str;
    // string str1(5, 'k');
    // cout << str1;

    // string str = "Kunal";
    // cout << str;

    // string str = "Kunal Kaushik";
    // cout << str;

    // string str;
    // getline(cin, str);
    // cout << str;

    // string s1 = "Kunal";
    // string s2 = "Kaushik";

    // s1.append(s2) or s1+=s2;
    // cout << s1 + s2 << endl;
    // s1.append(" " + s2);
    // cout << s1 << endl
    //      << s2;

    // cout << s1[1];
    // string abc = "ajsdhfidhdks wiefhicskdn";
    // cout << abc << endl;
    // abc.clear();
    // cout << "This is abc after modification: " << abc;

    // string s1 = "abcdefghijklmno";
    // string s2 = "pqrstu";
    // cout << s2.compare(s1) << endl;
    // if (!s1.empty())
    //     cout << "String is not empty" << endl;

    // s1.erase(3, 6);
    // //  from index 3 to 6 letters
    // cout << s1 << endl;
    // cout << s1.find("jkl");

    string s1 = "TheLionKing";
    s1.insert(2, "lol");
    cout << s1 << endl;

    s1.erase(2, 3);
    cout << s1 << endl;
    cout << s1.size() << " " << s1.length() << endl;

    for (int i = 0; i < s1.size(); i++)
    {
        cout << s1[i];
        if (i == 2 || i == 6)
            cout << endl;
    }
    cout << endl;
    // substring
    cout << s1.substr(2, 4);
    cout << endl;
    string s3 = "1234";
    int x = stoi(s3);
    cout << x + 2 << endl;

    int w = 786;
    cout << to_string(w + 1) + "2" << endl;

    string s5 = "sjaghiurh";

    sort(s5.begin(), s5.end());
    cout << s5;
    return 0;
}