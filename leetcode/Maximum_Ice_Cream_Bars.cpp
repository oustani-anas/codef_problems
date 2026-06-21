
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
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        int res = 0, count = 0;
        sort (costs.begin(), costs.end());
        for (int i = 0; i < n; i++) {
            res += costs[i];
            if (res <= coins)
                count++;
            else
                return count;
        }
        return count;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);  
    return 0;
}