
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

ll solve(vector<char> &str, ll len)
{
    cout << " len = " << len << endl; 
    for (ll i = 0; i < len - 1; i++)
    {
            if(str[i] != str[i + 1])
            {
                str.erase(str.begin() + i);
                str.erase(str.begin() + i + 1);
                len -= 2;
            }
    }
    return(str.size());
}

int main()
{
    ll t, len;
    vector<char> vect;
    string str;
    cin >> t;
    while(t--)
    {
        cin >> len >> str;
        for (char c: str){
            vect.push_back(c);
        }
        // cout << solve(vect, len) << endl;
        vect.clear();
    }
}