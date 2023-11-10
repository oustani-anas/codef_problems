
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
    ll n, m, a, b;
    ll rubl, tmp;
    cin >> n >> m >> a >> b;
    tmp = n;
    if(b / m <= a)
    {
        while(tmp > 0)
        {
            if(tmp == 0)
                break;
            rubl += b;
            if (tmp -= m >= 0){
                tmp -= m;
                rubl += b;
            }
            else if (tmp -= n >= 0){
                tmp -= n;
                rubl += a;
            }
        }
        cout << rubl << endl;
    }
}