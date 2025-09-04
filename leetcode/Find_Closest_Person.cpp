
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
    int findClosest(int x, int y, int z) {
        int dx, dy;
        dx = z - x;
        if(dx < 0)
            dx = dx * -1;    
        dy = z - y;
        if(dy < 0)
            dy = dy * -1;
        if(dx < dy) return 1;    
        if(dx > dy) return 2;
        return 0;    
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    cout << test.findClosest(2,5,6) << endl;
    
    return 0;
}