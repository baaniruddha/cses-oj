//https://cses.fi/problemset/task/1622

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int i;
    string s;
    cin >> s;
    sort (s.begin(), s.end());
    vector<string> p;
    do {
        p.push_back (s);
    }
    while (next_permutation (s.begin(), s.end()));
    cout << p.size() << endl;
    for (int i = 0; i < p.size(); i++)
        cout << p[i] << "\n";
    return 0;
}
