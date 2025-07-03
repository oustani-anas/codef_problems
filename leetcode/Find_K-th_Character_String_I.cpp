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
    
    string New_string(string str) {
        string word = str;
        for (int i = 0; i < str.size(); i++)
        {
            if(word[i] == 'z')
                word[i] = 'a';
            else if(word[i] >= 'a')
                word[i] = word[i] + 1;
        }
        return word;
    }

    char kthCharacter(unsigned int k) {
        string word = "a";
        string generated;
        // cout << "ab : " << New_string("ab") << endl; 
        if(k == 1)
            return 'a';      
        while(word.size() <= k - 1) {
            word = word + New_string(word);
        }
        return word[k - 1];
    }
};


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    cout << "res = " << test.kthCharacter(10);
    
    return 0;
}