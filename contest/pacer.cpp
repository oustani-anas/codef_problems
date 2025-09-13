
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

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; 
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<pair<ll, ll>> v(n+1);
        
        // Read requirements
        for (int i = 0; i < n; i++) {
            cin >> v[i].first >> v[i].second;
        }
        // Add final "virtual" requirement at (m, either side doesn’t matter)
        v[n] = {m, -1};
        
        ll ans = 0;
        ll curr_time = 0;
        ll curr_side = 0; // start at side 0
        
        for (int i = 0; i < n; i++) {
            ll next_time = v[i].first;
            ll next_side = v[i].second;
            ll len = next_time - curr_time;
            
            if (curr_side == next_side) {
                // must end on same side
                ans += len - (len % 2);
            } else {
                // must switch sides
                ans += len - ((len - 1) % 2);
            }
            
            curr_time = next_time;
            curr_side = next_side;
        }
        
        // handle free minutes after last requirement until m
        ll last_len = m - curr_time;
        ans += last_len;
        
        cout << ans << "\n";
    }
    
    return 0;
}
