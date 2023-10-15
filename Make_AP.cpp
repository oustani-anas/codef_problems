
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
#define ll long long
#define endl '\n'
using namespace std;

int main(){
    ll n; cin >> n;
    vector<ll> vect(3);
    for (ll i = 0; i < n; i++)
    {
        for (ll i = 0; i < 3; i++){
            cin >> vect[i];
        }
        sort(vect.begin(), vect.end());
        if(vect[1] == 1){
            ll md = vect[2] - vect[0];
            if(md % 2 == 0)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
        else {
            if(vect[1] % vect[0] == 0 && vect[2] % vect[0] == 0)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }

    }
    
}
