
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
    int jump( vector<int>& nums ) 
    {
        int n = nums.size();
        if(n == 1) return 0;

        int jumps = 0, current_id = 0, far_move = 0; 
        for(int i = 0; i < n - 1; i++)
        {
            far_move = max(far_move, i + nums[i]);
            if (i == current_id)
            {
                jumps++;
                current_id = far_move;
            }
        }
        return jumps;
    }
};

int main() {
    Solution test;
    vector<int> vect = {2,3,1,1,4};
    cout << test.jump(vect) << endl;
}