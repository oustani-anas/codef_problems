
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
    double myPow(double x, int n) {
        double m = n;
        double res = 1;
        if (n == 0 || x == 1 || (x == -1 && n % 2 == 0)) return 1;
        if(x == -1 && n % 2 != 0)
            return -1;
        else if(n >= 1) {
            for (double i = 1; i <= n; i++)
                res *= x;
        }
        else {
            m = m * -1;
            if(m == 2147483648)
                return 0;
            for (double i = 1; i <= m; i++)
                res *= 1 / x;
            //res = 1 / res;
        }
        // cout << res << endl;
        return res;
    }
};

int main() {
  Solution test;
  test.myPow(2,8);  
}