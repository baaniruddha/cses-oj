//https://cses.fi/problemset/task/1754

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        if ((a + b) % 3 == 0 && a <= (2 * b) && b <= (2 * a))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}
