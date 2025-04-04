
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
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int mid; 
        while(start <= end) {
            // cout << "start = " << start << " " << "end = " << end << endl;
            mid = start + (end - start) / 2;
            // cout << "mid = " << mid << endl;
            if(nums[mid] == target)
                return mid;
            else if(target > nums[mid])
                start = mid + 1;
            else 
                end = mid - 1;
        }
        return -1;
    }
};

int main() {
  Solution test;
  vector<int> nums = {2};
  cout << test.search(nums, 2) << endl;  
}