

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

int main()
{
    ll n, k, t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        ll tmp = 0;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == k)
                tmp = 1;
        }
        if(tmp)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
}