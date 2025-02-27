

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

// n even if n % 2 == 0

using namespace std;

int main()
{
    ll n; cin >> n;
    while(n != 1) {
        if(n % 2 == 0) {
            cout << n << " ";
            n = n / 2;
        }
        else if(n % 2 != 0) {
            cout << n << " ";
            n = n * 3 + 1;
        }
    }
    cout << 1;
    return 0;
}