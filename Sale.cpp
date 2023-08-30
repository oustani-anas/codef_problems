
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
    ll n, m, pr, res = 0;
    cin >> n >> m;
    vector<ll> vect(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> vect[i]; 
    }
    sort(vect.begin(), vect.end());
    for (ll i = 0; i < m; i++)
    {
        if(vect[i] < 0)
            res += (vect[i] * -1);
    }   
    cout << res << endl;
}