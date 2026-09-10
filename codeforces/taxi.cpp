
# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <list>
# include <forward_list>
# include <set>
# include <unordered_set>
# include <map>
# include <unordered_map>
# include <stack>
# include <queue>
# include <algorithm>
# include <bitset>
# include <array>

# define ll long long
# define endl '\n'

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n; cin >> n;
    int num = 0, one= 0, two = 0, three = 0, four = 0;
    // cout << n << endl;
    while (n--) {
        num = 0;
        cin >> num;
        if(num == 1)
            one++;
        if(num == 2)
            two++;
        if(num == 3)
            three++;
        if(num == 4)
            four++;
    }
        
        // cout << one << " " << two << " " << three << " " << four << " ";
        int res = 0, rem = 0;
        res = res + four;
        if(two % 2  == 0) res = res + two / 2;
        else {
            res = res + two / 2;
            rem = 2;
        }
        while(three--) {
            if(one)
                one--;
            res++;
        }
        rem = rem + one;
        res += (rem + 3) / 4;

        cout << res << endl;
}