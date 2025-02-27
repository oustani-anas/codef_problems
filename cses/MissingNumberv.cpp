
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#define ll long long
#define dd double
#define endl '\n'

using namespace std;

int main()
{
    ll n, index; cin >> n;
    vector<ll> vect(n - 1);
    for(ll i = 0; i < n ; i++) {
        cin >> vect[i];
    }
    sort(vect.begin(), vect.end());
    for(ll i = 0; i < n; i++) {
        index = i + 1;
        if(index != vect[i]) {
            cout << index << endl;
            break;
        }
    }
    return 0;
}