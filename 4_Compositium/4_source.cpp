// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool is_composite(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return true;
    }
    return false;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, energy_req = 0;
        cin >> a >> b >> x;
        for (ll i = a; i <= b; i++)
        {
            if (is_composite(i))
                energy_req += i;
            /* If the No. is composite it needs to be destroyed &
            reuires energy equal to its value */
        }
        if (energy_req <= x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
