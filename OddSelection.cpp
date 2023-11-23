
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

ll odd(vector<ll> &vect, ll n, ll x)
{
        ll unpair = 0;
        for (ll i = 0; i < n; i++)
        {
            if(vect[i] % 2 != 0 ){
                unpair++;    
            }
        }
        if(unpair % 2 == 0)
            return(1);
        return(0);
}

int main()
{
    ll n, x, t, pair;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(odd(a, n, x))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}