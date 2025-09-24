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

bool isUgly(int n) {
    for(ll i = 1; i <= n / 2; i++){
        if(n % i == 0 && (i != 2 && i != 3 && i!= 5))
            return false;
    }
    return true;        
}

int main() {
    ll t, num; cin >> t;
    while(t--){
        cin >> num;
        if(isUgly(num))
            cout << "ugly num" << endl;
        else cout << "num" << endl;
    }
}