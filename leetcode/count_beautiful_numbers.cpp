
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
    int beautifulNumbers(int l, int r) {
        int result = 0;
        for (int i = l; i <= r; i++)
        {
            if(count_sum_multi(i)) {
                // cout << "i =  " << i << endl;    
                result++;
            }
        }
        // cout << "result = " << result;
        return result;
    }
        bool count_sum_multi(int num) {
        int sum = 0, multi = 1;
        while (num > 0) {
            int digit = num % 10;
            if (digit == 0) {
                return true;
            }
            sum += digit;
            multi *= digit;
            num /= 10;
        }
        return (multi == 0 || multi % sum == 0);
    }
};

int main() {
    Solution test;
    test.beautifulNumbers(10, 20);
}