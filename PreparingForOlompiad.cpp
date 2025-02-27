

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#define ll long long
#define dd double
#define endl '\n'

using namespace std;

int main()
{
    ll t; cin >> t;
    ll n, m, s, maxd;
    while(t--) {
        m = 0, s = 0, maxd = 0;
        cin >> n;
        vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        // cout << a[0] << " " << b[0] << endl;
        b.push_back(0);
        for ( int i = 0; i < n; i++ ) {
            if(a[i] > b[i + 1]){
                maxd += a[i] - b[i + 1];
            };
        }
        cout << maxd << endl;
    }
    return 0;
}