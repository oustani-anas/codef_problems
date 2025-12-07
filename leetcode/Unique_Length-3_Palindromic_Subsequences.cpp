

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <list>
# include <forward_list>
# include <set>
# include <unordered_set>
# include <map>
# include <unordered_map>
# include <stack>
# include <queue>
# include <algorithm>
# include <bitset>
# include <array>

# define ll long long
# define endl '\n'

using namespace std;

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        // Store the first and last occurrence of each character
        vector<int> first(26, -1);
        vector<int> last(26, -1);
        
        for (int i = 0; i < s.size(); i++) {
            int curr = s[i] - 'a';
            if (first[curr] == -1) {
                first[curr] = i;
            }
            last[curr] = i;
        }
        
        int totalUnique = 0;
        
        // Check each character from 'a' to 'z' as the boundary 'X'
        for (int i = 0; i < 26; i++) {
            if (first[i] != -1 && last[i] > first[i] + 1) {
                // Find all unique characters between first[i] and last[i]
                unordered_set<char> middleChars;
                for (int j = first[i] + 1; j < last[i]; j++) {
                    middleChars.insert(s[j]);
                    // Optimization: if we found all 26, we can stop
                    if (middleChars.size() == 26) break;
                }
                totalUnique += middleChars.size();
            }
        }
        
        return totalUnique;
    }
};

int main() {
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    cout << test.countPalindromicSubsequence("bbcbaba");
    
    return 0;
}