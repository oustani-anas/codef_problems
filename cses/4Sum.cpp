
// leetcode problem

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <sstream>
#define ll long long
#define dd double
#define endl '\n'

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       vector<vector<int>> dvect;
       for (int i = 0; i < nums.size(); i++){
        for (int j = i + 1; j < nums.size(); j++){
         for (int k = j + 1; k < nums.size(); k++){
          for (int l = k + 1; l < nums.size(); l++){
            if(nums[i] + nums[j] + nums[k] + nums[l] == target
            && i != j != k != l){
                vector<int> vect;
                bool test = true;
                cout << nums[i] << " " << nums[j] << " " << nums[k] 
                << " " << nums[l] << endl;
                vect.push_back(nums[i]);
                vect.push_back(nums[j]);
                vect.push_back(nums[k]);
                vect.push_back(nums[l]);
                for (auto i : dvect) {
                    if(i == vect)
                        test = false;
                }
                if (test)
                    dvect.push_back(vect);  
                        }
                    }
                }
            }
       }
       return dvect;
    }
};


int main()
{
    Solution test;
    vector<int> vect = {2,2,2,2,2};
    vector<vector<int>> sol;
    sol = test.fourSum(vect, 0);
    // for(auto i : sol) {
    //     cout << endl;
    //     for(auto j : i) {
    //         cout << " " << i[j];
    //     }
    // }
    return 0;
}