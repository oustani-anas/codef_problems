
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ll n, t; cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll res = 0;
        cin >> n;
        vector<ll> vect(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> vect[i];
            res += vect[i];
        }
        if(res % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
}