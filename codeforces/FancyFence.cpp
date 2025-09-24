
# include <iostream>
# include <string>
# include <map>
# include <vector>
# include <cmath>
# include <iomanip>
# define ll long long
# define dd double
# define endl '\n'
 
using namespace std;

int main()
{
    dd a, t;
    dd n;
    cin >> t;
    while(t--)
    {
        cin >> a;
        n = 360 / (180 - a);
        if(n != (int)n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}