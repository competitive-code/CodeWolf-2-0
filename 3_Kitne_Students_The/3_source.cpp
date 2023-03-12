// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll x, y, d;
void reduceFraction()
{
    d = __gcd(x, y);
    x = x / d;
    y = y / d;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll b, g;
        cin >> b >> g >> x >> y;
        if (x == 0 && y == 0)
            cout << 0 << endl;
        else if (x == 0)
            cout << g << endl;
        /* as boys ratio factor is 0, we can take any number of
        girls and we've to maximise the number. So, we'll take all the girls */
        else if (y == 0)
            cout << b << endl; // vice versa of above if girl’s ratio factor is 0.
        else if (x != 0 and y != 0)
        {
            reduceFraction(); /* It requires to reduce x:y ratio in reduced form.
                                   e.g., 8:2 will be converted to 4:1. */
            ll t = min(b / x, g / y);
            /* (b / x) and (g / y) gives how many factors of x & y
            we can take from b & g. To maintain ratio, take minimum from that */
            cout << t * (x + y) << endl;
        }
    }
    return 0;
}
