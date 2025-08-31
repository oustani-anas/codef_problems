
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
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        vector<vector<int>> res;
        int n = grid.size();

        // Example: start at (row, col) = (1,0)
        int r = 0, c = 0;
        while (r < n && c < n) {
            cout << grid[r][c] << " ";
            r++;
            c++;
        }    
        return res;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    vector<vector<int>> grid = {{1,7,3}, {9,8,2}, {4,5,6}};
    test.sortMatrix(grid);
    
    return 0;
}