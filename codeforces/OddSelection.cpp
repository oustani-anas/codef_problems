
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
    if(odd > 0)
        odd--, x--;
    else return(0);
    n = 2e3 + 1;
    while (n--)
    {   
        if(x == 1)
        {
            if (even >= 1)
                return(1);
            return (0);
        }
        if(x == 0)
            return(1);

        if(odd >= 2 && x != 0)
            odd -= 2, x -= 2;
        else if(even >= 2 && x != 0)
            even -= 2, x -= 2;
    }
    return(x == 0);
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
        if(is_odd(a, n, x))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}