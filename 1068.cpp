//https://cses.fi/problemset/task/1068/
//Introductory Problems - Weird Algorithm

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    cin >> n;
    for(i=0; i=n; i++)
    {
        cout << n << " ";
        if (n == 1)
            break;
        if (n%2 == 0)
            n = n/2;
        else
            n = (n*3)+1;
    }
    return 0;
}
