//https://cses.fi/problemset/task/1072

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    long long i, n;
    cin >> t;
    for (i = 1; i <= t; i++) {
        n = ((i * i * ((i * i) - 1)) / 2) - (4 * (i - 1) * (i - 2));
        cout << n << "\n";
    }
    return 0;
}
