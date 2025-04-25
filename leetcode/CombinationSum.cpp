
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
    vector<vector<int>> combinationSum(vector<int>& cans, int target) {
        int n = cans.size();
        for (int i = 0; i < n; i++)
        {
            if (cans[i] <= target) {
                
            }
        }
        
    }
};

int main() {
    Solution test;
    vector<int> arr = {2,3,6,7};
    test.combinationSum(arr, 7);
}