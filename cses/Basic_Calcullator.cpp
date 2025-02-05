
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include <sstream>
#define ll long long
#define dd double
#define endl '\n'

using namespace std;

int calculate(string s) {
    vector<int>     nums;
    vector<char>    operats;
    string num;
    int res = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == '/' || s[i] == '*' || s[i] == '-' || s[i] == '+') {
            operats.push_back(s[i]);
            s[i] = ' ';
        }
    }    
    
    stringstream ss(s);
    while(ss >> num) {
        nums.push_back(stoi(num));
    }
    
    if (operats.size() == 0)
        return stoi(s);
    for (int i = 0; i < operats.size(); ) {
    if (operats[i] == '*') {
        nums[i + 1] *= nums[i];
        nums.erase(nums.begin() + i);
        operats.erase(operats.begin() + i);
    } else if (operats[i] == '/') {
        nums[i] /= nums[i + 1];
        nums.erase(nums.begin() + i + 1);
        operats.erase(operats.begin() + i);
    } else {
        i++;
    }
    }
    res = nums[0];
    
    for (int i = 0; i < operats.size(); i++) {
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
    string str = " 3/2 ";
    cout << calculate(str) << endl;
    return 0;
}