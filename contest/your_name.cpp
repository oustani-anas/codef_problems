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
    
    ll q; cin >> q;
    while(q--) {
        string name, other;
        ll n;
        cin >> n;
        cin >> name;
        cin >> other;
        sort(name.begin(), name.end());
        sort(other.begin(), other.end());
        
        //cout << "name = " << name << endl;
        // cout << "other = " << other << endl;

        if(name == other)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}