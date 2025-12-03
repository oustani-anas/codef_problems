
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

#define ll long long
#define endl '\n'

class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
            sum++;
        if(p > sum)
            return -1;
        else if(sum % p == 0)
            return 0;

        for (int j = 0; j < nums.size(); j++) {
            for (int i = 0; i < nums.size(); i++)
            {
                // if(sum - nums[i] > p)

            }
        }
        
    }
};

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    vector<int> nums = {3,1,4,2};
    test.minSubarray(nums, 6);
    
    return 0;
}