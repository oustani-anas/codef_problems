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

int main() {
    
    ll num; cin >> num;
    map <ll, string>  Roman;
    Roman[1] = 'I';
    Roman[5] = 'V';
    Roman[10] = 'X';
    Roman[50] = 'L';
    Roman[100] = 'C';
    Roman[500] = 'D';
    Roman[1000] = 'M';

    map<ll, string>::reverse_iterator itr;
    
    for( itr = Roman.rbegin(); itr != Roman.rend(); ++itr)
    {
        //cout << itr.first << " == " << itr.second << endl;
        ll tmp = num;
        tmp = tmp / itr->first;
        cout << endl << "tmp = " << tmp << endl;
        while(tmp--)
            cout << itr->second;
        num = num % itr->first;
    }

    
    
}