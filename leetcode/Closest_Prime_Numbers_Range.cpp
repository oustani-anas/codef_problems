
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

# define ll long long
# define endl '\n'

using namespace std;

class Solution {
public:
    
    std::vector<bool> sieve(int n) {
    std::vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p)
                isPrime[i] = false;
        }
    }

    // std::vector <int> primes;
    // for (int i = 2; i <= n; i++)
    //     if (isPrime[i]) primes.push_back(i);

    return isPrime;
}

    vector<int> Min_pr(vector<int> prs) {
        int min_dif = INT16_MAX, diff;
        if(prs.size() < 2)
            return {-1, -1};
        if(prs.size() == 2)
            return {prs[0], prs[1]};
        vector<int> res = {-1, -1};
        for (int i = 0; i < prs.size() - 1; i++)
        {
            diff = prs[i + 1] - prs[i];
            if (diff < min_dif){
                min_dif = diff;
                res = {prs[i], prs[i + 1]};
            }
        }
        return res;
    }
    
    vector <int> closestPrimes(int left, int right) {
        vector<int>  res, prs;
        vector<bool>  primes = sieve(right);
        for (int i = left ; i <= right; i++)
        {
            if (primes[i]) {
                prs.push_back(i);
            }
        }
        return Min_pr(prs);
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    Solution test;
    vector<int> res =  test.closestPrimes(1, 2);
    for (auto i : res)
        cout << i << " ";
    
    return 0;
}