//https://cses.fi/problemset/task/1617

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    long long x = 1;
    cin >> n;
    while (n--)
        x = (x * 2) % 1000000007;
    cout << x << "\n";
    return 0;
}
