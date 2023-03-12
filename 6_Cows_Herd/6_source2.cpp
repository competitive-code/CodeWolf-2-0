// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a = 0, b = 0, c = 1, temp;
        /* Using long long because approx. above 50th term,
        No. of cows in herd goes beyond int data type limit */
        for (ll i = 0; i < n; i++)
        {
            temp = a;
            a += b;
            b = c;
            c = 2 * temp;
        }
        cout << a + b + c << endl;
    }
    return 0;
}
