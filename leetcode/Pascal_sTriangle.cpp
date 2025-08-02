
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
    vector < vector <int> > generate(int numRows) {
        vector<vector<int>> res;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> row;
            vector<int> lastr;
            if (i == 0) 
                res.push_back({1});   
            else if (i == 1) 
                res.push_back({1, 1});   
            else {
                for (int j = 0; j < i ; j++)
                {
                    lastr = res.back();
                    if (j == 0)
                        row.push_back(1);
                    else 
                        row.push_back(lastr[j - 1] + lastr[j]);
                }
                row.push_back(1);
                res.push_back(row);
            }    
        }
        // for ( auto vect : res ) {
        //     for ( auto n : vect )
        //         cout << n << " ";
        //     cout << endl;
        // }
        return res;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int i = 5;
    Solution test;
    test.generate(i);
    
    return 0;
}