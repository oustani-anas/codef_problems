
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#define ll long long
#define dd double
#define endl '\n'

using namespace std;

int calculate(string s) {
    vector<int> nums;
    vector<char> operats;
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == '/' || s[i] == '*' || s[i] == '-' || s[i] == '+') {
            operats.push_back(s[i]);
        }
        else if(s[i] >= '0' && s[i] <= '9') {
            int num = stoi(string(1, s[i]));
            nums.push_back(num);
        }
    }
    if(operats.size() == 0)
        return stoi(s);
    for (int i = 0; i < operats.size(); i++) {
        if(operats[i] == '*') {
            nums[i] *= nums[i + 1];
            nums.erase(nums.begin() + i + 1);
            operats.erase(operats.begin() + i);
        }
        else if(operats[i] == '/'){
            nums[i] /= nums[i + 1];
            nums.erase(nums.begin() + i + 1); 
            operats.erase(operats.begin() + i);
        }
    }
    // for(auto i : nums)
    //     cout << i << " ";
    // cout << endl;
    // for(auto i : operats)
    //     cout << i << " ";
    // cout << endl;
    res = nums[0];
    for(int i = 0; i < operats.size(); i++) {
        if (operats[i] == '+') {
            res += nums[i + 1];
        }
        else if(operats[i] == '-') {
            res -= nums[i + 1]; 
        }
    }
    return res;
};

int main()
{
    string str = "3+2*2";
    cout << calculate(str) << endl;
    return 0;
}