
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
#define ll long long
#define dd double
#define endl '\n'

using namespace std;

ll solve(ll num) {
    ll totale_ways, attack_ways;
    totale_ways = (num*num * (num*num -1)) / 2;
    // cout << "for " << num << " totaleways is: " << totale_ways << endl;
    attack_ways = 4 * (num - 1) * (num - 2);
    return (totale_ways - attack_ways);
}

int main()
{
    ll n; cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cout << solve(i) << endl;
    }
    return 0;
}