
# include <iostream>
# include <string>
# include <map>
# include <vector>
# include <cmath>
# include <iomanip>
# define ll long long
# define dd double
# define endl '\n'
 
using namespace std;

ll n, odd, even;

ll is_odd(vector<ll> &vect, ll n, ll x)
{
    
}


int main()
{
    ll n, x, t;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        vector<ll> a(n);
        odd = 0, even = 0;
        for(ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] % 2 == 0)
                even++;
            else 
                odd++;         
        }
        // cout << "odd =  " << odd << endl;
        if(is_odd(a, n, x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}