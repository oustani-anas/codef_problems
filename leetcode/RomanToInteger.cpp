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


int romanToInt(string str) {
    //map<ll, string> nums;
    ll res = 0;
    for (ll i = 0; i < str.size(); i++)
    {
        if(str[i] == 'C'){
            if(str[i + 1] == 'M'){
                res += 900;
                i++;
            } else if(str[i + 1] == 'D'){
                res += 400;
                i++;
            } else res += 100;
        }
        if(str[i] == 'X'){
            if(str[i + 1] == 'L'){
                res += 40;
                i++;
            } else if(str[i + 1] == 'C'){
                res += 90;
                i++;
            } else res += 100;
        }
    }
            
}

int main() {
    
    
}