
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

// characters A, C, G, and T.

int main()
{
    string str; cin >> str;
    ll rep = 1, max = 0;
    for (ll i = 0; i < str.size(); i++)
    {
        ll j = i + 1;
        if(str[i] == str[j])
            rep++;
        else {
            if(rep > max)
                max = rep;
            rep = 1;
        } 
    }
    cout << max << endl;
    return 0;
}