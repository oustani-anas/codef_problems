
// Find the Lexicographically Largest String From the Box I

#include <iostream>
#include <string>
#include <list>

#define ll long long
#define endl '\n'

using namespace std;

class Solution {
public:
    string answerString(string word, int numFriends) {
        if (numFriends == 1) {
            return word;
        }
        int n = word.size();
        string res;
        for (int i = 0; i < n; i++) {
            res = max(res, word.substr(i, min(n - numFriends + 1, n - i)));
        }
        return res;
    }
};

int main() 
{
    Solution test;
    cout << test.answerString("dbca", 2) << endl;
}