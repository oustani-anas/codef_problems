
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
    bool isValid(string s) {
        stack <char> stack;
        unordered_map <char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};

        for (char c : s) {
            if (mapping.find(c) == mapping.end()) {
                stack.push(c);
            } else if (!stack.empty() && mapping[c] == stack.top()) {
                stack.pop();
            } else {
                return false;
            }
        }

        return stack.empty();        
    }
};

int main() {    
    Solution test;
    if(test.isValid("()[]{}"))
        cout << "true" << endl;
    else 
        cout << "false" << endl;
}