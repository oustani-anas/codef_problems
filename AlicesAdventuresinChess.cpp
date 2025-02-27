
#include <iostream>
#include <string>
#include <stack>
#define ll long long 
using namespace std;

ll n, a, b;
string s;

int reached(ll x, ll y) {
    ll ns = 0, we = 0;
    for(ll i = 0; i <= n; i++) {
            i = i % n;
            if(s[i] == 'N'){
                y++;
            }
            else if(s[i] == 'E') {
                x++;
            }
            else if(s[i] == 'W') {
                x--;
            }
            else if(s[i] == 'S') {
                y--;
            }
            if(i == n - 1 && ns == 0 && we == 0)
                break;
            //cout << s[i] << endl;
            //cout << x << " " << y << endl;
            if(a == x && b == y) {
                return true;
            }
            if(x > a && y > b) {
                break;
            }
        }
        return false;
}


int main() {
    ll t; cin >> t;
    ll x = 0, y = 0;

    while (t--)
    {
        cin >> n >> a >> b;
        cin >> s;
        if(reached(x, y))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }    
}