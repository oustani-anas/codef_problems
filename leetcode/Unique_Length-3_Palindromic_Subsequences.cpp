

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
        map<char, vector<int>> appear;
        set<vector<char>> subs;
        int res = 0;
        for (int i = 0; i < s.size(); i++)
        {
            appear[s[i]].push_back(i);
        }
        // for (const auto pair : appear) {
        //     char key = pair.first;
        //     vector<int> value = pair.second;

        //     cout << "key = " << key << " value : ";
        //     for(auto n : value)
        //         cout << n << " ";
        //     cout << endl; 
        // }
        
        for (const auto pair : appear) {
            char key = pair.first;
            vector<int> value = pair.second;
            vector<char> sub;
            if(value.size() >= 2) {

                char first = s[value[0]];
                char last = s[value[value.size() - 1]];
                sub = {first, '@', last};
                for (int i = value[0] + 1; i < value[value.size() - 1]; i++)
                {
                    // cout << "s[i] = " << s[i] << " ";
                    sub[1] = s[i];
                    subs.insert(sub);
                }
            }
        }
        
        // cout << "map : " << endl;
        // for( const auto pair : appear) {
        //     char first = pair.first;
        //     vector<int> second = pair.second;
            
        //     cout << first << " ";
        //     for ( auto n : second )
        //     cout << n << " ";
        //     cout << endl;
            
        // }
        // cout << "end map" << endl;
        
        // for( auto sb : subs){

        //     for(auto c : sb)
        //        cout << c;
        //     cout << " ";
        // }

        // cout << "subs size = "<< subs.size() << endl;
        return subs.size();
    }
};

int main() {
    
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    cout << test.countPalindromicSubsequence("bbcbaba");
    
    return 0;
}