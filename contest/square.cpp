
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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if(a == b && b == c && c == d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}