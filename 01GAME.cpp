
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <utility>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <fstream>

#define ll long long

using namespace std;

ll one, zero;

void calc_zo(string &str) {
    for (ll i = 0; i < str.length(); i++)
    {
        if(str[i] == '1')
            one++;
        else zero++;
    }
}

int main()
{
    ll t, td;
    cin >> t;
    string str;
    while (t--)
    {
        one = 0, zero = 0;
        cin >> str;
        calc_zo(str);
        if(one <= zero)
            td = one;
        else    td = zero;
        if(td % 2)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
    }   
}