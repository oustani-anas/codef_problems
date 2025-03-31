
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
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int> newgas = gas;
        vector<int> newcost = cost;
        
        newgas.insert(newgas.end(), newgas.begin(), newgas.end());
        newcost.insert(newcost.end(), newcost.begin(), newcost.end());
        int n = newgas.size();
        int res = 0, gass = 0, count = 0, igass = 0;
        for (int i = 0; i <  n - 1; i++)
        {
            gass += newgas[i];
            if (gass >= newcost[i]) {
                cout << "i = " << i << endl;
                gass = gass - newcost[i] + newgas[i + 1];
                cout << gass << endl;
                
            }
        }
      return -1;
    }
};

int main() {
  Solution test;
  vector<int> gas = {1,2,3,4,5}, cost = {3,4,5,1,2};
  test.canCompleteCircuit(gas, cost);  
}