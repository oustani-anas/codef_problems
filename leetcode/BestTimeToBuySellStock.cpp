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
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        // cout << "prices.size() = " << prices.size();
        if(n == 1) return 0;

        int maxprofit = 0;
        for (int i = 0; i < n - 1; i++) 
        {
            if(prices[i] < prices[i + 1])
                maxprofit += prices[i + 1] - prices[i];
        }
        // cout << "maxp  = " << maxprofit << endl;
        return maxprofit;
    }
};

int main() {
  Solution test;
  vector<int> prices = {1};
  test.maxProfit(prices);  
}