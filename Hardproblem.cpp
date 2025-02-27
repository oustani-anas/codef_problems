
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <stack>
#define ll long long
#define dd double
#define endl '\n'

using namespace std;

int main()
{
    ll t; cin >> t;
    ll m, a, b, c;
    while(t--) {
        ll res = 0;
        cin >> m >> a >> b >> c;
        //ll m1 = m, m2 = m; 
        ll r1 = 0, r2 = 0, rest;
        r1 = m - a;
        r2 = m - b;
        if(r1 <= 0) r1 = m;
        else r1 = a;
        if(r2 <= 0) r2 = m;
        else r2 = b;
        rest = (m*2 - r1 - r2);
        if(c <= rest)
            res = r1 + r2 + c;
        else
            res = r1 + r2 + rest;
        cout << res << endl;
    }   
    return 0;
}