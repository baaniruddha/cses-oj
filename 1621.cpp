//https://cses.fi/problemset/task/1621

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, i, a[200001], v;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort (a, a + n);
    v = unique (a, a + n) - a;
    cout << v << "\n";
    return 0;
}
