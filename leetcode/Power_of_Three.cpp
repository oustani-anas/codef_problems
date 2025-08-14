
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

# define ll long long
# define endl '\n'

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        int num;
        if (n == 0)
            return false;
        for ( int i = 1; i < n; i++) {
            num = pow(3, i);
            if (num == n)
                return true;
        }
        return false;
    }
};


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    if (test.isPowerOfThree(28))
        cout << "true ";
    else 
        cout << "false ";
    
    return 0;
}