
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

int searchInsert(vector<int>& nums, int target)
{
    ll i = 0;
    for (i = 0; i < nums.size(); i++)
    {
        if(nums[i] == target)
            return i;
        if(nums[i] > target)
            return i;
    }
    return i;
}

int main() {
    vector<int> vect = {1, 12, 14, 78, 222};
    int t = 4;
    int res = searchInsert(vect, t);
    cout << res;       
}