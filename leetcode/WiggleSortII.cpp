
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
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        vector<int> res = nums;
        sort(res.begin(), res.end());
        for(int i = 0; i < n / 2; i++) {
            cout << "i = " <<  i << endl;
            nums[i] = res[i];
            nums[i + n/2] = res[i + n/2]; 
        }
        for(auto i : res)
            cout << i << " ";
        cout << endl;
        for(auto i : nums)
            cout << i << " ";
        
    }
};

int main() {
    Solution test;
    vector<int> vect = {1,3,2,2,3,1};
    test.wiggleSort(vect);    
}