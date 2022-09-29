//https://cses.fi/problemset/task/1618

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, a = 0;
    cin >> n;
    while (n > 0) {
        n /= 5;
        a += n ;
    }
    cout << a << "\n";
    return 0;
}
