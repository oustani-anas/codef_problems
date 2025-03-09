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
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {    
            vector<char> clmn;
            for (auto line : board)
            {
                clmn.push_back(line[i]);
            }
            if(!is_valid(clmn))
                return false;
        }
        for (auto line : board)
        {
            if(!is_valid(line))
                return false;
        }
        return true;
    }

    bool is_valid(vector<char> line) {
            map<char, bool> elements {
                {'1', true},
                {'2', true},
                {'3', true},
                {'4', true},
                {'5', true},
                {'6', true},
                {'7', true},
                {'8', true},
                {'9', true},
            };
            for (char c : line) {
                if(c == '.')
                    continue;
                if(elements[c])
                    elements[c] = false;
                else
                    return false;
            }
        return true;
    }
};

int main() {
  Solution test;
  vector<vector<char>> soduk = {
     {'1','3','.','.','7','.','.','.','.'}
    ,{'6','.','.','1','9','5','.','.','.'}
    ,{'.','9','8','.','.','.','.','6','.'}
    ,{'8','.','.','.','6','.','.','.','3'}
    ,{'4','.','.','8','.','3','.','.','1'}
    ,{'7','.','.','.','2','.','.','.','6'}
    ,{'.','6','.','.','.','.','2','8','.'}
    ,{'.','.','.','4','1','9','.','.','5'}
    ,{'.','.','.','.','8','.','.','7','9'}
    };

    if(test.isValidSudoku(soduk))
        cout << "truee" << endl;

}