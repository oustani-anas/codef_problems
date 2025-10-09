
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
std::map<std::string, std::string> numLetter = {
{"1", "A"}, {"2", "B"}, {"3", "C"}, {"4", "D"}, {"5", "E"},
{"6", "F"}, {"7", "G"}, {"8", "H"}, {"9", "I"}, {"10", "J"},
{"11", "K"}, {"12", "L"}, {"13", "M"}, {"14", "N"}, {"15", "O"},
{"16", "P"}, {"17", "Q"}, {"18", "R"}, {"19", "S"}, {"20", "T"},
{"21", "U"}, {"22", "V"}, {"23", "W"}, {"24", "X"}, {"25", "Y"},
{"26", "Z"}
};

class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if (n == 0 || s[0] == '0') return 0;

        // dp[i] = number of ways to decode substring s[0..i-1]
        vector<int> dp(n + 1, 0);
        dp[0] = 1; // empty string
        dp[1] = 1; // first char is valid (already checked)

        for (int i = 2; i <= n; i++) {
            int one = s[i - 1] - '0';
            int two = stoi(s.substr(i - 2, 2));

            // single digit (1-9)
            if (one >= 1 && one <= 9)
                dp[i] += dp[i - 1];

            // two digits (10-26)
            if (two >= 10 && two <= 26)
                dp[i] += dp[i - 2];
        }

        return dp[n];
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    cout << test.numDecodings("0");
    
    return 0;
}