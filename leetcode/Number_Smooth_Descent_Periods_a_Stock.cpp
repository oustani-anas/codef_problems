
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
    long long getDescentPeriods(vector<int>& prices) {
        long long count = 1;
        long long res = 1;
        int n = prices.size();

        for (int i = 1; i < n; i++) {
            if (prices[i] == prices[i - 1] - 1) {
                count++;
            } else {
                count = 1;
            }
            res += count;
        }
        cout << "res = " << res << endl;
        return res;
    }
};


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    vector<int> prices = {12,11,10,9,8,7,6,5,4,3,4,3,10,9,8,7};
    // vector<int> prices = {8,6,7,7};
    test.getDescentPeriods(prices);
    
    return 0;
}