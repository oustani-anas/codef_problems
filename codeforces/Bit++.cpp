
#include <iostream>

using namespace std;

int main()
{
    int n;
    int x = 0;
    string state;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> state;
        if(state == "++X" || state == "X++")
            x++;
        else
            x--;
    }
    cout << x;
}