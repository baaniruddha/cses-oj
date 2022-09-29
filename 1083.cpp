//https://cses.fi/problemset/task/1083
//Introductory Problems - Missing Number

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long array[200001], a, b = 0, i, n;
    cin >> n;
    a = (n * (n + 1)) / 2;
    for (i = 0; i < n - 1; i++) {
        cin >> array[i];
        b += array[i];
    }
    cout << a - b << "\n";
    return 0;
}
