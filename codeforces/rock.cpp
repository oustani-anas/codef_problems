
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
    ll t, num;
    string bord = "abcdefgh";
    cin >> t;
    string pos;
    while(t--)
    {
        cin >> pos;
        for (ll i = 0; i <= 7; i++)
        {
            if(i + 1!= (int )pos[1] - 48)
                cout << pos[0] << i + 1<< endl;
            if(pos[0] != bord[i])
                cout << bord[i] << (int )pos[1] - 48 << endl;
        }
        
    }
}