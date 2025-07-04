
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define ll long long

using namespace std;


int main() {
    ll t, x, n;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        vector<ll> doors(n);
        for (int  i = 0; i < n; i++)
            cin >> doors[i]; 
        ll p = 0;
        for (ll i = 0; i < n; i++)
        {
            if(doors[i] == 0)
                p++;
            else if(doors[i] == 1 && x) {
                p = i + x;
                i = i + x; 
            }
            else if(doors[i] == 1 && !x)
                break;
        }
        if(p >= n - 1)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    
}