
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main()
{
    string s, ret;
    cin >> s;
    set<char>se;

    se.insert('a');
    se.insert('o');
    se.insert('y');
    se.insert('e');
    se.insert('u');
    se.insert('i');
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0; i < s.size(); i++)
    {
        if (se.find(s[i]) == se.end())
            ret += s[i];
    }
    for(int i=0; i < ret.size(); i++)
        cout << '.' << ret[i];
}