
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

#define ll long long
#define endl '\n'

using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        for (int i = 0; i < words.size(); i++) {
            for (auto c : words[i]) {
                if(c == x) {
                    res.push_back(i);
                    break;
                }
            }
        }
        /* cout << "res: " << endl;
        for(int i : res)
            cout << i << " "; 
        */
        return res;      
    }
};

int main() 
{
    Solution test;
    vector<string> str = {"abc","bcd","aaaa","cbc"};
    test.findWordsContaining(str, 'a');   
}