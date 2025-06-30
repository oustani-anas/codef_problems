
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
# include <queue>
# include <algorithm>
# include <bitset>
# include <array>
# include <sstream>

#define ll long long
#define endl '\n'

using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        vector<string> directs;
        stringstream ss(path);
        string item, res;

        while(getline(ss, item, '/')) {
            
            if(!item.empty() && item != ".." && item != "."){
                directs.push_back(item);
            } if (item == "..")
                if(directs.size())
                    directs.pop_back();
        }

        cout << "  " << directs.size() << endl;
        for (auto i : directs)
            res += "/" + i;
        // cout << " res = " << res << endl;
        if(res.empty())
            res = "/";
        return res;
    }
};


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    string path = "/home/";
    test.simplifyPath(path);  
    return 0;
}