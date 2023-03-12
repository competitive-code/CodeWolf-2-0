// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;
#define ll long unsigned
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll sum = 0;
        for (ll i = 0; i < s.length(); i++)
        {
            sum = sum + int(s[i] - '0'); // or sum=(sum+int(s[i])-48);
        }
        if (sum % 3 == 0)
            cout << "tighada" << endl;
        else
            cout << "bighada" << endl;
    }
    return 0;
}