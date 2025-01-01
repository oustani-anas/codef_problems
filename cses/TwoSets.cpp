
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

// in n = 7 sum of set1 = 14 and set2 = 14

int main()
{
    ll n; cin >> n;
    vector<ll> nums(n), seta, setb;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        nums.push_back(i + 1);
        sum += i + 1;
    }
    ll sumset = sum / 2, res = 0;
    bool ress = false;
    if(sum % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }
    else {
        ll count = 0;
        for (ll i = n; i > 0; i--)
        {
           if((count + i) < sumset) {
                count += i;
                seta.push_back(i);
           }
           else if((count + i) == sumset) {
                seta.push_back(i);
                count += i;
                ress = true;
           }
           else {
                setb.push_back(i);
           }
        }
    }
    if(ress)
    {
        cout << "YES" << endl;
        cout << setb.size() << endl;
        for (auto i : setb)
            cout << i << " ";
        cout << endl;
        cout << seta.size() << endl;
        for (auto i: seta)
            cout << i << " ";
    } else
        cout << "NO" << endl;

    return 0;
}