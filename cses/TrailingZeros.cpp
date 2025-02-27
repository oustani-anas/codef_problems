
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
    //ll n; cin >> n;    
    ll zcount = 0;
    //cout << facto(n) << endl;
    ll facts[10000000] = {};
    facts[0] = 1;
    for (ll i = 1; i < 1000000000; i++)
    {
        facts[i] = i * facts[i - 1];
    }
    
    ll num = facts[6];
    cout << num << endl;
    // while(num % 10 == 0) {
    //     zcount++;
    //     num /= 10;
    // }
    cout << zcount << endl;
    return 0;
}