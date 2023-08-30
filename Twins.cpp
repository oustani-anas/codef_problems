
#include <iostream>
#include <algorithm>

using namespace std;

int min_coins(int *tab, int sum, int tab_len)
{
    int steps = 0;
    int i = 0;
    int min_c = 0;

    for (i = tab_len - 1; i >= 0; i--)
    {
        min_c += tab[i];
        steps += 1;
        if(min_c > sum/2)
            break;
    }
    return(steps);
}

int main()
{
    int n_coins;
    int reslt; 
    cin >> n_coins;
    int coins[n_coins];
    int sum;

    for (int  i = 0; i < n_coins; i++)
    {
        cin >> coins[i];
        sum += coins[i]; 
    }
    sort(coins, coins + n_coins);
    reslt = min_coins(coins, sum, n_coins);
    cout << reslt << endl;
}