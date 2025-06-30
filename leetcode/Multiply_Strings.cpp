
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
#include <cmath>

#define ll long long
#define endl '\n'

using namespace std;

class Solution {
public:
    
    ll number(string str) {
        ll res = 0;
        ll len = str.length();
        for (char c : str) {
            ll num;
            len--;
            num = (c - '0') * pow(10, len);
            res += num;
        }
        return res;
    }

    string multiply(string num1, string num2) {
        string snum = "";
        ll num = number(num1);
        ll numm = number(num2);
        ll res = num * numm, len = 0;
        ll nlen = res;
        cout << "res = " << res << endl; // 56008
        cout << "len = " << len << endl;
        
        while(nlen) {
            len++;
            nlen = nlen / 10;
        }
        
        cout << "len = " << len << endl;
        while(len--) {      
            // len--;
            ll num = res / pow(10, len);
            cout << " num = " << num << endl; 
            char c = '0' + num;
            res = res % (ll)pow(10, len);
            // cout << "c = " << c << endl;
            // cout << "len = " << len;
            snum += c;  
        }
        // cout << "snum = " << snum << endl;
        return snum;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    // cout << test.multiply("2", "3") << endl;
    cout << test.multiply("408", "5") << endl;
    
    return 0;
}