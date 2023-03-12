// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*  If you observe the first 8 to 10
    terms of sequence you will get the formula
    1 1 3 5 7 13 23 37 63 ......
    herd_fib(n) = herd_fib(n - 1) + 2 * herd_fib(n - 3); */
ll herd[100];
/*  using array to store herd_fib terms to
    reduce time for calculating herd_fib(n - 3) */
ll herd_fib(ll n)
{
    if (n <= 2)
        return 1;
    if (herd[n] != 0)
        return herd[n];
    else
    {
        herd[n] = herd_fib(n - 1) + 2 * herd_fib(n - 3);
        return herd[n];
    }
}
int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << herd_fib(n) << endl;
    }
    return 0;
}
