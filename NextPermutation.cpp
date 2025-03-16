
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
#include <sstream>
#include <queue>
#include <algorithm>
#include <bitset>
#include <array>

#define ll long long
#define endl '\n'

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        if (!next_permutation(nums.begin(), nums.end())) {
            // If it's the last permutation, reset to the first one
            sort(nums.begin(), nums.end());
        }
    }
};

int main() {
    Solution test;
    ll t, n;
    vector<int> numss = {3, 2, 1};
    test.nextPermutation(numss);
    for(auto i : numss)
        cout << i << " ";
    // cin >> t;
    /* while (t--) {
        cin >> n;
        vector<int> vect(n);
        for(auto i = 0; i < n; i++)
            cin >> vect[i];
        test.nextPermutation(vect);   
    }*/
}