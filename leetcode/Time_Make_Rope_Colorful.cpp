
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
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int total = 0;
        int prevMax = neededTime[0];  // the most expensive balloon in current same-color group

        for (int i = 1; i < n; ++i) {
            if (colors[i] == colors[i - 1]) {
                // If current balloon is cheaper, remove it
                if (neededTime[i] <= prevMax) {
                    total += neededTime[i];
                }
                // If current balloon is more expensive, remove previous max, keep current
                else {
                    total += prevMax;
                    prevMax = neededTime[i];
                }
            } else {
                // New color => reset max
                prevMax = neededTime[i];
            }
        }

        return total;
    }
};


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    string str = "aaabbbabbbb"; // abab
    vector<int> needtime = {3,5,10,7,5,3,5,5,4,8,1}; 
    cout << test.minCost(str, needtime);
    
    return 0;
}