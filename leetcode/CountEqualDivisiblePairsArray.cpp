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
    int countPairs(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == nums[i + 1] ){
                
            }
        }
    }
};

int main() {
  Solution test;
  vector<int> nums = {3,1,2,2,2,1,3};
  int k = 2;
  test.countPairs(nums, k);  
}