

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
    vector<vector<int>> dirs = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    void dfs(int i, int j, vector<vector<int>>& heights, vector<vector<bool>>& visited) {
        int m = heights.size(), n = heights[0].size();
        visited[i][j] = true;

        for (auto& dir : dirs) {
            int x = i + dir[0], y = j + dir[1];
            if (x < 0 || x >= m || y < 0 || y >= n) continue;  // Out of bounds
            if (visited[x][y]) continue;                       // Already visited
            if (heights[x][y] < heights[i][j]) continue;       // Can't flow uphill
            dfs(x, y, heights, visited);
        }
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size(), n = heights[0].size();

        vector<vector<bool>> pacific(m, vector<bool>(n, false));
        vector<vector<bool>> atlantic(m, vector<bool>(n, false));

        // DFS from Pacific borders
        for (int i = 0; i < m; i++) dfs(i, 0, heights, pacific);
        for (int j = 0; j < n; j++) dfs(0, j, heights, pacific);

        // DFS from Atlantic borders
        for (int i = 0; i < m; i++) dfs(i, n - 1, heights, atlantic);
        for (int j = 0; j < n; j++) dfs(m - 1, j, heights, atlantic);

        // Collect cells reachable by both oceans
        vector<vector<int>> result;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (pacific[i][j] && atlantic[i][j])
                    result.push_back({i, j});
            }
        }
        return result;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    vector<vector<int>> heis = {{1,2,2,3,5},{3,2,3,4,4},{2,4,5,3,1},{6,7,1,4,5},{5,1,1,2,4}};
    vector<vector<int>> res;
    res = test.pacificAtlantic(heis);
    for ( auto node : res ) {
        for(auto i : node) {
            cout << i << " ";
        }
        cout << "   ";
    }
    return 0;
}