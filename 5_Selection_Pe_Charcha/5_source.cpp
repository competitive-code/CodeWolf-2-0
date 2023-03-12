// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define for0(n) for (ll i = 0; i < n; i++)
int main()
{
    ll n, m, score;
    string player_name;
    cin >> n >> m;
    unordered_map<string, ll> string_map;
    // To get access to score by Player's Name
    unordered_map<ll, string> score_map;
    // To get access to Player's Name by score
    for0(n)
    {
        cin >> player_name >> score;
        if (string_map[player_name] < score)
        { // if players name get repeated we will map greater score with it
            string_map[player_name] = score;
            score_map[score] = player_name;
        }
    }
    ll s = string_map.size(), arr[s], i = 0;
    // Total No.of players with different Names i.e.Size of mapped Players
    for (auto t : string_map)
    { // storing scores of these players into array
        arr[i] = t.second;
        i++;
    }
    sort(arr, arr + s);    // Sorting array
    reverse(arr, arr + s); // To pick top M performers , We reverse array
    for0(m)
    {
        cout << score_map[arr[i]] << " " << arr[i] << endl;
    }
    return 0;
}
