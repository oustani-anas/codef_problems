
# include <iostream>
# include <string>
# include <vector>
# include <deque>
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

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    ll t; cin >> t;
    while(t--) {
        ll n, m, x, y, c, d, res = 0;
        cin >> n >> m >> x >> y;
        for (int i = 0; i < n; i++){
            cin >> c;
            if(c < x)
                res++; 
        }
        for (int j = 0; j < m; j++){
            cin >> d;
            if(d < y)           
                res++;
        }
        // cout << endl;
        // for(auto i : ms)
        //     cout << i << " ";
        // cout << endl;
        // for(auto j : ns)
        //     cout << j << " ";
        cout << n + m << endl;

    }
    
    return 0;
}