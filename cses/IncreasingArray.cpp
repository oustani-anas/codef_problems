
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

int main()
{
    ll n; cin >> n;
    ll res = 0;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    
    for (ll i = 0; i < n - 1; i++)
    {
        if(arr[i + 1] < arr[i]) {
            // cout << "test " << endl;
            res = res + (arr[i] - arr[i + 1]);
            arr[i + 1] = arr[i];
            // cout << "arr[i] - arr[i + 1] == " << arr[i] - arr[i + 1] << endl;
            // cout << "res = " << res << endl;
        }
    }
    cout << res << endl;
    return 0;
}