
# include <iostream>
# include <string>
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
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int m = potions.size();
        vector<int> result;

        for (int spell : spells) {
            long long needed = (success + spell - 1) / spell; // ceil(success / spell)
            
            // Find the first potion >= needed
            int index = lower_bound(potions.begin(), potions.end(), needed) - potions.begin();

            // Count of valid potions
            result.push_back(m - index);
        }

        return result;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    vector<int> spells = {5, 1, 3};
    vector<int> potions = {1,2,3,4,5};
    test.successfulPairs(spells, potions, 7);
    
    return 0;
}