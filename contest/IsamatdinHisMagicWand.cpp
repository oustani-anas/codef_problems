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

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    ll t; cin >> t;
    while(t--) {
        ll n;
        bool haseven = false;
        bool hasodd = false;
        cin >> n;
        vector<int> toys(n);
        for (int i = 0; i < n; i++)
        {
            cin >> toys[i];
            if(toys[i] % 2 == 0)
                haseven = true;
            else
                hasodd = true;
        }
            if (haseven && hasodd) {
                sort(toys.begin(), toys.end());
            }
            for(auto ty : toys)
                cout << ty << " ";
            cout << endl;
        
    }
    
    return 0;
}