
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

# define ll long long
# define endl '\n'

using namespace std;

class Solution {
public:
    int compareVersion (string version1, string version2) {
        string v1, v2;
        vector<int> vrs1, vrs2;
        ll sum1 = 0, sum2 = 0;
        stringstream s1(version1);
        stringstream s2(version2);
        string num;
        
        while (getline(s1, num, '.')) {
            vrs1.push_back(stoi(num));
        }
        
        while (getline(s2, num, '.')) {
            vrs2.push_back(stoi(num));
        }
        
        int n = min(vrs1.size(), vrs2.size());

        for (int i = 0; i < n; i++)
        {
            if (vrs1[i] > vrs2[i])
                return 1;
            else if (vrs1[i] < vrs2[i])
                return -1;
        }

        for (int i = n; i < vrs1.size(); i++) {
            if (vrs1[i] > 0) return 1;
        }
        for (int i = n; i < vrs2.size(); i++) {
            if (vrs2[i] > 0) return -1;
        }
        

        return 0;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    cout << test.compareVersion("1.2", "1.10");
    
    return 0;
}