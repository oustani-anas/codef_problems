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
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> result;
        vector<int> numbs = nums;
        sort(numbs.begin(), numbs.end());
        do {
            result.push_back(numbs);
        }
        while(next_permutation(numbs.begin(), numbs.end()));
        // cout << "result length = " << result.size() << endl;
        return result;
    }
};

int main() {

    Solution test;
    vector<int> vect = {3, 2, 1};
    test.permute(vect);
}