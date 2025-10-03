
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
    int maxBottlesDrunk (int numBottles, int numExchange) {
        ll emptyb = 0, fullb = numBottles, numex = numExchange, bdrink = 0;
        bool test = true;
        while (test) {
            bdrink += fullb;
            emptyb += fullb;
            fullb = 0;
            if (numex <= emptyb) {
                fullb++;
                emptyb = emptyb - numex;
                numex++;
            } else {
                test = false;
            }
        }
        // cout << "bdrink = " << bdrink << endl;
        return bdrink;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    test.maxBottlesDrunk(10, 3);
    
    return 0;
}