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
        unordered_map<string, vector<string>> mapp;
        vector<vector<string>> result;
        
        for (auto& word : strs) 
        {
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end()); // Sort to get a unique key for anagrams
            mapp[sortedWord].push_back(word);
        }
        
        for (auto& pair : mapp) 
            result.push_back(pair.second);
        
        return result;
    }
};

int main() {
    
}