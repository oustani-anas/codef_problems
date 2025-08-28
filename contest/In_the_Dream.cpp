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

bool valid(int x, int y) {
    int mx = max(x, y);
    int mn = min(x, y);
    return mx <= 2 * mn + 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int firstHalfRiOI = a;
        int firstHalfKDOI = b;
        int secondHalfRiOI = c - a;
        int secondHalfKDOI = d - b;

        if (valid(firstHalfRiOI, firstHalfKDOI) && valid(secondHalfRiOI, secondHalfKDOI))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
