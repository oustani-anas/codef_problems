
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

// the idea i got is we will check if the number 2x + x
int twox_x(ll num) {
    ll y; 
    for(ll i = 0; i < num; i++) {
        // y = 2 * i + i;
        y = 2 * i + 1;
        if(y == num)
            return true;
        if(y > num)
            return false;
    }
    return false;
} 
int main() {
    ll t; cin >> t;
    ll a, b;
    while(t--) {
        ll c = 0;
        cin >> a >> b;
        c = a + b;
        // if(twox_x(a) && twox_x(b))
        //    cout << "YES" << endl;
        if (!twox_x(a) || !twox_x(b))
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }
}