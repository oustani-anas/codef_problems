
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
public :
    int triangleNumber ( vector <int>& nums ) {
        int res = 0;
        int n = nums.size();
        if (n < 3)
            return 0;
        sort (nums.begin(), nums.end() );
        int k = n - 1;
        while (k >= 2) {
            for (int i = 0; i < k; i++)
            {
                for (int j = i + 1; j < k; j++)
                {
                    if ( nums[i] + nums[j] > nums[k] ) {
                        // cout<<" "<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                        res++;
                    }
                }
            }
            k--;
        }
        // cout << res << endl;
        return res;    
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    vector<int> nums = {4, 2, 3, 4};
    cout << test.triangleNumber(nums);
    vector<int> numss = {2, 2, 3, 4};
    cout << "test 2: " << endl;
    cout << test.triangleNumber(numss);
    
    return 0;
}