
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
    int countOperations(int num1, int num2) {
        int count = 0;
        while(num1 != 0 && num2 != 0) {
            count++;
            // cout << num1 << "  " << num2 << endl;
            if (num1 >= num2)
                num1 -= num2;
            else
                num2 -= num1;
            if(num1 == 0 || num2 == 0) {
                return count;
                break;
            }
                
        }
        //cout << "count = " << count << endl;
        return count;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    test.countOperations(2,3);
    
    return 0;
}