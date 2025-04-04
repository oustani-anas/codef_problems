
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
    long long maximumTripletValue(vector<int>& nums) {
        long long res = 0;
        int n = nums.size();
        long long  i, j, k;
        i = 0, j = 1, k = 2;
        long long  calc;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                for(int k = j + 1; k < n; k++) {
                    calc = (nums[i] - nums[j]) * nums[k];
                    if(calc > res) res = calc;
                }
            }
        }
        // cout << "res = " << res;
        return res;
    }
};

int main() {
    Solution test;
    vector<int> vect = {12,6,1,2,7};
    test.maximumTripletValue(vect);    
}