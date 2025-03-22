
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
    ll n; cin >> n;
    ll sum = 0;
    while(n > 0) {
        n = n / 5;
        sum = sum + n;
    }
    cout << sum << endl;
}