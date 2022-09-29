//https://cses.fi/problemset/task/1094
//Introductory Problems - Increasing Array

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n, a, b = 0, sum = 0 ;
    cin >> n;
    while (n--) {
        cin >> a;
        if (b > a)
            sum += b - a;
        else
            b = a;
    }
    cout << sum;
    return 0;
}
