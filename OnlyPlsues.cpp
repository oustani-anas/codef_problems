
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
    ll t, a, b, c, inc, scan = 3;
    vector<ll> vect(3);
    cin >> t;
    while (t--)
    {
        
        for(int i = 0; i < 3; i++){
            cin >> vect[i];
        }
        for(ll i = 0; i < 5; i++){
            sort(vect.begin(), vect.end());
            vect[0]++;
        }
        cout << vect[0] * vect[1] * vect[2] << endl;
    }
    
}