
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
    vector < vector<int> > generate(int numRows) {
        std::vector< std::vector<int> > res(numRows);
        res[0] = {1};
        for (size_t i = 1; i < numRows; ++i) {
            res[i] = std::vector<int>(i + 1);
            res[i][0] = 1;
            res[i][i] = 1;
            for (size_t j = 1; j < i; ++j)
                res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
        }
        return res;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int i = 5;
    Solution test;
    test.generate(i);
    
    return 0;
}