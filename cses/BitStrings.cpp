
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
#define mod 1000000007

using namespace std;


ll power(ll base, ll exp) {
    ll res = 1;
    if(exp == 0)
        return 1;
    while(exp--) {
        res *= base;
        res = res % mod; 
    }
    return res;
}


int main()
{
    ll n; cin >> n; 
    ll res = power(2, n);
    res = res % mod;
    cout << res % mod << endl;
    return 0;
}