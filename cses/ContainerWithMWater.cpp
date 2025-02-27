
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
    int maxArea(vector<int>& height) 
    {
        int area, len, width, result = 0;
        int i = 0, j = height.size() - 1;
        while(i < j)
        {
            len = j - i;
            if(height[i] < height[j])
                width = height[i];
            else             
                width = height[j];
            area = width * len;
            if(area > result)
                result = area;
            if(height[i] < height[j])
                i++;
            else j--;
        }
        return result;
    }
};

int main()
{
    ll n; cin >> n;
    vector<int> vect(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vect[i];
    }
    Solution test;
    cout << test.maxArea(vect) << endl;
    return 0;
}