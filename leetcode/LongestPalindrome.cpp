
// Longest Palindrome by Concatenating Two Letter Words

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
    int longestPalindrome(vector<string>& words) {
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            if (words[i][0] == words[i][1])
                count = count + 2;
            else
                sort(words[i].begin(), words[i].end());     
        }

        return count;
    }
};

int main() {
    Solution test;
    vector<string> words;
    test.longestPalindrome(words);
}