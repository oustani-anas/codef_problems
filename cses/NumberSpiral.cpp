
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

ll soll(ll x, ll y) {
        if (x < y)
        {
            if (y % 2 == 1)
            {
                ll r = y * y;
                return r - x + 1;
            }
            else
            {
                ll r = (y - 1) * (y - 1) + 1;
                return r + x - 1 ;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                ll r = x * x;
                return r - y + 1 ;
            }
            else
            {
                ll r = (x - 1) * (x - 1) + 1;
                return r + y - 1 ;
            }
        } 
}

int main()
{
    ll t; cin >> t;
    ll x, y;
    while (t--)
    {
        // cin >> x >> y;
        cin >> y >> x;
        cout << soll(x, y) << endl;    
    }  
    return 0;
}