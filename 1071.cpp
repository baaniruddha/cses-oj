//https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    long long a, b, m, n;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        m = max (a, b);
        if (m % 2 == 0) {
            n = (m * m) - (b - 1) - (m - a);
            cout << n << "\n";
        }
        else {
            n = (m * m) - (a - 1) - (m - b);
            cout << n << "\n";
        }
    }
    return 0;
}
