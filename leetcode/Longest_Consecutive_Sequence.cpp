
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
    int longestConsecutive(vector<int>& nums) {
        int res, max = 0, count = 0;

        if (nums.size() == 0)
            return 0;
        if (nums.size() == 1)
            return 1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            // if ((nums[i] = nums[i + 1] - 1) || (nums[i] = nums[i + 1]))
            if (nums[i] == nums[i + 1])
                continue; 
            else if (nums[i] == nums[i + 1] - 1)
                count++; 
            else {
                if (max < count)
                    max = count;
                count = 0;
            }
            if (count > max)
                max = count;
        }
        cout << "max = " << max;
        return max;
    }
};


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    vector<int> nums = {100,4,200,1,3,2};
    test.longestConsecutive(nums);  
    
    return 0;
}