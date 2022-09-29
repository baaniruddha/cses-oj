//https://cses.fi/problemset/task/1623

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, i, j;
    long long array[21], sum = 0, count, diff = 1e12;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> array[i];
        sum += array[i];
    }
    for (i = 0; i < (1 << n); i++) {
        count = 0;
        for (j = 0; j < n; j++)
            if (i & (1 << j))
                count += array[j];
        diff = min (diff, abs (2 * count - sum));
    }
    cout << diff << "\n";
    return 0;
}
