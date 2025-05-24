
# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <list>
# include <forward_list>
# include <set>
# include <unordered_set>
# include <map>
# include <unordered_map>
# include <stack>
# include <sstream>
# include <queue>
# include <algorithm>
# include <bitset>
# include <array>

#define ll long long
#define endl '\n'

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        string str;
        stringstream ss(s);
        while(ss >> str) {}
        // cout << str.size() << endl;
        return str.size();
    }
};

int main() {
  Solution test;
  string str = "Hello World";
  test.lengthOfLastWord(str);  
}