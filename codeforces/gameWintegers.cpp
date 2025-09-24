
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#define ll long long
#define dd double
#define endl '\n'
 
using namespace std;

int main()
{
    ll n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if((n - 1) % 3 == 0 || (n + 1) % 3 == 0)
            cout << "First" << endl; 
        else    
            cout << "Second" << endl; 
    }
}