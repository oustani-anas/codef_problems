
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

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string res = "";
        int count = 0;
        while(n--) {
            char ch = strs[0][count];
            for (int i = 1; i < strs[0].size(); i++){
                cout << i << " "  << strs[i][count] << " " << ch << endl;
                if(strs[i][count] != ch)
                    return res;
            }
            res += ch;
            count++;
        }    
        return res;
    }
};

int main() {
  Solution test;
  vector<string> strs = {"flower","flow","flight"};
  cout << test.longestCommonPrefix(strs) << endl;  
}