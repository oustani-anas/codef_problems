
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

ll max(ll n, ll m) {
    if(n > m)
        return n;
    return m;
}

int main()
{
    ll t; cin >> t;
    ll n, m, s, maxD;
    while(t--) {
        m = 0, s = 0, maxD = 0;
        cin >> n;
        vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) {
            int m = 0, s = 0; // Monocarp's and Stereocarp's problem counts
            // Monocarp trains on day i
            m += a[i];

            // Stereocarp trains on the next day, if it exists
            if (i + 1 < n) {
                s += b[i + 1];
            }

            // Update maximum difference
            maxD = max(maxD, m - s);
        }

        cout << maxD << endl; 
        // cout << a[0] << " " << b[0] << endl;

    }
    return 0;
}