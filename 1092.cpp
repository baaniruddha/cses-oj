//https://cses.fi/problemset/task/1092

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int i, j;
    cin >> i;
    if (i % 4 == 0) {
        cout << "YES" << "\n";
        cout << i / 2 << "\n";
        for (j = 1; j <= i / 4; j++)
            cout << j << " " << i + 1 - j << " ";
        cout << "\n" << i / 2 << "\n";
        for (j = i / 4 + 1; j <= i / 2; j++)
            cout << j << " " << i + 1 - j << " ";
    }
    else if (i % 4 == 3) {
        cout << "YES" << "\n";
        cout << i / 2 + 1 << "\n";
        cout << 1 << " " << 2 << " ";
        for (j = 4; j <= i / 4 + 3; j++)
            cout << j << " " << i + 4 - j << " ";
        cout << "\n" << i / 2 << "\n";
        cout << 3 << " " ;
        for (j = i / 4 + 4; j <= i / 2 + 2; j++)
            cout << j << " " << i + 4 - j << " ";
    }
    else
        cout << "NO" << "\n";
    return 0;
}
