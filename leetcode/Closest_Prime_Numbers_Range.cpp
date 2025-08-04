
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
    
    bool is_prime(int num) {
        for (int i = 2; i < num; i++)
        {
            if(num % i == 0)
                return false;
            }
            return true;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<int> res, prs;
        int count = 0;
        for (int i = left + 1; i < right; i++)
        {
            if (is_prime(i)) {
                if(count == 2)
                    return prs;
                prs.push_back(i);
                count++;
            }
        }
        return {-1, -1};
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    vector<int> res =  test.closestPrimes(10, 19);
    for(auto i : res)
        cout << i << " ";
    
    return 0;
}