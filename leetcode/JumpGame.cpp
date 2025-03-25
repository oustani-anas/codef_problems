
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
    bool canJump(vector<int>& nums) {
        // bool state = false;
        int farthest = 0;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (i > farthest) return false;
            farthest = max(farthest, i + nums[i]); 
            if (farthest >= nums.size() - 1) return true;
        }
        return false;
    }
};

int main() {
    Solution test;
    vector<int> arr = {2,3,1,1,4};
    if (test.canJump(arr))
        cout << "True" << endl;
    else 
        cout << "False" << endl;
}