
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <algorithm>
#define ll long long
#define dd double
#define endl '\n'

using namespace std;

class Solution {
public:
    int reverse_num(int x) 
    {
        ll res;
        string str = to_string(x);
        reverse(str.begin(), str.end());
        if(x < 0)
            str.insert(str.begin(), '-');
        res = stoll(str);
        // cout << "x = " << x << " res = " << res << endl;
        if(res > INT32_MAX || res < INT32_MIN){
            return 0;
        }
        return static_cast<int>(res);
    }
};

int main()
{
    int num;
    cin >> num;
    Solution test;
    cout << test.reverse_num(num) << endl;  
    return 0;
}