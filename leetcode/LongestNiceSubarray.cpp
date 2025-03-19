
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
    int longestNiceSubarray(vector<int>& nums) 
    {
        int longest = 1, count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
                // cout << "nums[i] = " << nums[i] << endl;
            if(i != nums.size()){

            cout << "=> " << (nums[i] & nums[i + 1]) << endl;
            if(!(nums[i] & nums[i + 1]))
                count++;
            if(count > longest)
                longest = count;
                // cout << "count = "<< count << endl;
            }
        }
        // cout << "count = " << count << endl;
        // longest++;
        cout << "longest = " << longest << endl;
        return longest;
    }
};

int main() {
    Solution test;
    vector<int> nums = {744437702,379056602,145555074,392756761,560864007,934981918,113312475,1090,16384,33,217313281,117883195,978927664};
    test.longestNiceSubarray(nums);    
}