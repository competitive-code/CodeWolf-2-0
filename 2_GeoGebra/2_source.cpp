// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define for0(n) for (ll i = 0; i < n; i++)

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        double x[n], y[n];
        double m1 = INT_MAX, m2 = INT_MIN;
        /* Or we can take it as double m1=1e5, m2=-1e5;
        as the constraint is 10 power 5 */
        for0(n) cin >> x[i]; // for0(n) is defined as for(ll i = 0; i < n; i++)
        for0(n) cin >> y[i];
        for0(n - 1)
        {
            double t = (y[i + 1] - y[i]) / (x[i + 1] - x[i]);
            // slope of a line Formula Slope=(y2-y1)/(x2-x1)
            m1 = min(m1, t);
            m2 = max(m2, t);
        }
        cout << m1 + m2 << endl;
    }
    return 0;
}
