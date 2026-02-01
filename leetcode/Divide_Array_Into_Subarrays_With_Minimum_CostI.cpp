
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
    int minimumCost(vector<int>& nums) {
        int res;
        int n = nums.size();
        vector<int> nums_sorted = nums;
        sort(nums_sorted.begin(), nums_sorted.end());
        if(n == 3)
            return (nums[0] + nums[1] + nums[2]);
        if(nums[0] > nums_sorted[2])
            res = nums[0] + nums_sorted[0] + nums_sorted[1];
        else
            res = nums_sorted[0] + nums_sorted[1] + nums_sorted[2];
        return res;
    }
};


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    

    
    return 0;
}