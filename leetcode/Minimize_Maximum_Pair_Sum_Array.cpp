
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

using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max = 0;
        auto begin = nums.begin();
        auto end = nums.end() - 1;
        while(begin < end) {
            if(*begin + *end > max)
                max = *begin + *end;
            begin++;
            end--;
        }        
        // cout << "max = " << max << endl;
        return max;
    }
};

// i saw this as the best solution 
// class Solution {
// public:
//     int minPairSum(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int l  = 0;
//         int r  = nums.size()-1;
//         int res = 0;

//        while(l<r){
//           res = max(res,nums[l]+nums[r]);
//           l++;
//           r--;
//        }
//        return res;
//     }
// };

// auto init = atexit([]() { ofstream("display_runtime.txt") << "0"; });


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    vector<int> nums = {4,1,5,1,2,5,1,5,5,4};
    cout << endl << test.minPairSum(nums);
    
    return 0;
}