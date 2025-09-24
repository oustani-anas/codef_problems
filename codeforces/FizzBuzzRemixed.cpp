#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>
#include <bitset>
#include <array>

#define ll long long
#define endl '\n'

using namespace std;

/* int solve(int num) {
    ll res = 0;
    for (int i = 0; i <= num; i++) {
            if(i % 3 == i % 5){
                cout << i << " ";
                res++;
            }
        }
            cout << endl;
    return res;
} */

int solve(int num) {
    ll add, res = 0;
    ll t = num / 15;
    ll u = num % 15;
    if(u < 3)
        add = u + 1;
    else 
        add = 3;
    res = t * 3 + add;
    return res;
}

int main() {
    ll t; cin >> t;
    ll res, num;
    // cout << solve(151) << endl;
    // cout << "ss = " << ssolve(151) << endl;
    // exit(0);
    while (t--) {
        res = 0;
        cin >> num;
        cout << solve(num) << endl;
    }
}