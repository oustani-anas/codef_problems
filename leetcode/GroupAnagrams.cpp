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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        int count = 0;
        map<int, vector<string>> mapp;
        for (auto word : strs) {
            count = 0;
            for(auto i : word)
                count += i;
            mapp[count].push_back(word);
            // std::cout << count << endl;       
        }
            
        for(auto arrn : mapp)
            result.push_back(arrn.second);
        return result;
    }
};

int main() {
    
}