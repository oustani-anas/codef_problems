
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
    vector<string> letterCombinations(string digits) {
        vector <string> result;
        vector <string> str;
        map <char, string> tell = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"},};
        
        for(int i = 0; i < digits.size(); i++) {
            str.push_back(tell[digits[i]]);
        }
        


        for( auto i : str){
            for( char c : i)
                cout << c;
            cout << endl;
        }
        
        return result;
    }

    void generate() {

    }
};


int main() {
  Solution test;
  string str = "29";
  vector<string> ress;
  ress = test.letterCombinations(str);
  for(auto i : ress)
    cout << i << " ";  
}