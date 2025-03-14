
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

# define ll long long
# define endl '\n'

using namespace std;

class Solution {
public:
    string countAndSay(int n) 
    {
        string res = "1";
        int l = n - 1;
        while(l--)
        {
            res = count_num(res);
            // cout << "ress = " << res << endl;
        }
        return res;
    }
    string count_num(string &str) {
        string res = "";
        vector <pair<char, int>> mapp;
        int count = 1;
        for(int i = 0; i < str.size() ; i++)
        {
            if (str[i] == str[i + 1]) {
                count++;
            }
            else if (str[i] != str[i + 1]) {
                mapp.emplace_back(str[i], count);
                count = 1;
            }
        }
        for(auto i : mapp) {
            // cout << i.second << i.first;
            res += to_string(i.second) + i.first;
        }
        return res;
    }
};

int main() {
    // 3322251    ===>   23321511
    Solution test;
    // ll n; cin >> n;
    string res = test.countAndSay(4);
    cout << endl << "res = " << res;  
}