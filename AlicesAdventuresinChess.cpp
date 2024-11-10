
#include <iostream>
#include <string>
#include <stack>
#define ll long long 
using namespace std;

int main() {
    ll t; cin >> t;
    ll n, a, b;
    ll x = 0, y = 0;
    string s;
    while (t--)
    {
        cin >> n >> a >> b;
        cin >> s;
        for(ll i = 0; i < s.size(); i++) {
            if(s[i] == 'N')
                y++;
            if(s[i] == 'E')
                x++;
            if(s[i] == 'W')
                x--;
            if(s[i] == 'S')
                y--;
        }
    }
    
}