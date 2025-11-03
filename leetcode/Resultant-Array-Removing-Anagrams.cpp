
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
    vector <string> removeAnagrams(vector<string>& words) {
        vector <string> res;
        res.push_back(words[0]);
        for (int i = 1; i < words.size(); i++) {
            string bword = words[i - 1];
            sort (bword.begin(), bword.end());
            string word = words[i];
            sort (word.begin(), word.end());
            if (bword != word)
                res.push_back(words[i]);
        }
        cout << endl;
        for (auto s: res ){
            cout << s << " ";
        }

        return res;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    vector<string> words = {"a","b","a"};
    test.removeAnagrams(words);
    
    return 0;
}