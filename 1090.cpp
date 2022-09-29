//https://cses.fi/problemset/task/1090

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, x, i, j = 0, count = 0;
    cin >> n >> x;
    int p[n];
    for (i = 0; i < n; i++)
        cin >> p[i];
    sort (p, p + n);
    for (i = n - 1; i > j; i--)
        if (p[i] + p[j] <= x) {
            count++;
            j++;
        }
    cout << n - count << "\n";
    return 0;
}
