
// Check If All 1's Are at Least Length K Places Away

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
    bool kLengthApart(vector<int>& nums, int k) {
        bool appear = false;
        int  steps = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            // cout << "sts = " << steps << endl;  
            if (nums[i] == 0)
                steps++;
            if (nums[i] == 1) {
                // cout << "steps = " << steps << endl; 
                if (appear && steps < k)
                    return false;
                steps = 0;
                appear = true;
            }
        }
        return true;
    }
};


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    vector<int> nums = {1,0,0,1,0,1}; 
    Solution test;
    if(test.kLengthApart(nums, 2))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
    return 0;
}