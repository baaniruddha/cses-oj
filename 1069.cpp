//https://cses.fi/problemset/task/1069
//Introductory Problems - Repetitions

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int i, len = 0, count = 0;
    string s;
    cin >> s;
    for (i = 0; i < s.size(); i++) {
        if (s[i] == s[i - 1])
            count ++;
        else
            count = 1;
        len = max (len, count);
    }
    cout << len << "\n";
    return 0;
}
