
#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n;
    cin >> n;
    std::string str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (int j = 0; j < n; j++)
    {
        if(str[j].length() > 10)
        {
            cout << str[j][0];
            cout << str[j].length() - 2;
            cout << str[j][str[j].length() - 1];
            cout << endl;
        }
        else
            cout << str[j] << endl;
    }
}