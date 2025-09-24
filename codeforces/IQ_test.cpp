#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#define ll long long
#define endl '\n'

using namespace std;

int main(){
    ll n, f = 0, z = 0; cin >> n;
    vector<ll> vect(n);
    for (ll i = 0; i < n; i++){
        cin >> vect[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if(vect[i] % 2 == 0)
            z++;
        else
            f++;
    }
    if(f == 1){
        for (ll i = 0; i < n; i++)
        {
            if(vect[i] % 2 != 0){
                cout << i + 1 << endl;
                exit(0);
            }
        }    
    }
    else if( z == 1){
        for (ll i = 0; i < n; i++)
        {
            if(vect[i] % 2 == 0){
                cout << i + 1 << endl;
                return(0);
                
                
            }
        }    
    }
}