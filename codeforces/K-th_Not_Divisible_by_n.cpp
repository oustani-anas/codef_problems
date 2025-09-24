
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>
#include <bitset>
#include <array>

#define ll long long
#define endl '\n'

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    ll n, k;
    // cout << __LONG_LONG_MAX__ << endl;
    while(t--)
    {
        ll n , k ;
        cin >> n >> k;

        ll div = k / (n-1);
        ll ex = k % (n-1);
        ll ans = n * div + ex;
        if (ex == 0)
            ans-- ;
        cout << ans << endl ;
    }
}