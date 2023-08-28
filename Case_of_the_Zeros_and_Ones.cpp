
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ll n, z = 0, o = 0, res;
    ll min_occur;
    cin >> n;
    string str; cin >> str;
    res = n;
    for (ll i = 0; i < n; i++)
    {
        if(str[i] == '0')
            z++;
        else
            o++;
    }
    min_occur = min(o, z);
    res = n - (min_occur * 2);
    cout << res << endl;
}