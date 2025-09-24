
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
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string left,  right;
        while(n--) {
            left  += '(';
            right += ')';
        }
        int t = n * 2;
        while(t--) {
            string form;

        }
    }
};

int main() {
    
    Solution test;
    int n = 1;
    // test.generateParenthesis(n);
    int n; cin >> n;
    string left, right;
    while(n--) {
        left  += '(';
        right += ')';
    }
    string str = left + right;
    int len = str.size();
    int arr[len]; 
    for (size_t i = 0; i < len; i++)
    {
        arr[i] = i;
    }
    // use std::next permutation to generate all posible cases
    // without the last one and the first one
}