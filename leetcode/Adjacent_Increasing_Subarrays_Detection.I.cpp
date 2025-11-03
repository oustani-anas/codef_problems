
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
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int count = 0;
        int num_subs = 0;

        if(k == 1)
            return true;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] < nums[i + 1])
            count++;
            else
            count = 0;
            // cout << " count = " << count << endl;
            if(count == k - 1) {
                num_subs++;
                count = 0;
                i += k - 1;
            }
            // cout << " nums subs = " << num_subs << endl;
            if(num_subs == 2)
                return true;
        }
        // cout << "num_subs = " << num_subs << endl;
        return false;
    }
};


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    // vector<int> nums = {2,5,7,8,9,2,3,4,3,1};
    vector<int> nums = {6,13,-17,-20,2};
    cout << test.hasIncreasingSubarrays(nums, 2) << endl;

    return 0;
}