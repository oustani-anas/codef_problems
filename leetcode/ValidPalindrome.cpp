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
        int n = s.size();
        int i = 0, j = n - 1;
        while (j > i)
        {
            // cout << s[i] << " " << s[j] << endl;
            if(s[i] != s[j]) {
                if(IsPall(s, i + 1, j) || IsPall(s, i, j - 1))
                    return true;
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    bool IsPall(string &str, int b, int e) {
        while (b < e)
        {
            if(str[b] != str[e])
                return false;
            b++;
            e--;
        }
        return true;
    }
};

int main() {
    Solution test;
    cout << test.validPalindrome("abcddcba") << endl;
    // cout << "second test: " << endl;
    cout << test.validPalindrome("abca") << endl;
    cout << test.validPalindrome("abc") << endl;
}
