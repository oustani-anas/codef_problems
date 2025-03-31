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

// valid palindrome II
using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
        string revs = s;
        int count = 0, n = s.size();
        reverse(revs.begin(), revs.end());
        int i = 0, j = n - 1;
        while (j > i)
        {
            // cout << s[i] << " " << s[j] << endl;
            if(s[i] != s[j])
                count++;
            i++;
            j--;
        }
        // cout << "count = " << count << endl;
        if (count >= 1)
            return false;
        return true;
    }   
};

int main() {
    Solution test;
    test.validPalindrome("abcddcba");
    cout << "second test: " << endl;
    test.validPalindrome("abca");
}