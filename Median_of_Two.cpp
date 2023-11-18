
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
#define ll long long
#define dd double
#define endl '\n'
 
using namespace std;

int main()
{
    float m, n, mid;
    float res;
    cin >> m >> n;
    vector<ll> nums1(m), nums2(n);
    for(ll i = 0; i < m; i++){
        cin >> nums1[i];
    }
    for(ll i = 0; i < n; i++){
        cin >> nums2[i];
    }
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    sort(nums1.begin(), nums1.end());
    mid = nums1.size() / 2;
    if(nums1.size() % 2 == 0)
    {
        res = (nums1[mid - 1] + nums1[mid]);
        cout << fixed << setprecision(5) << res / 2 << endl;
    }
    else
    {
        res = nums1[mid];
        cout << fixed << setprecision(5) << res << endl;
    }
}