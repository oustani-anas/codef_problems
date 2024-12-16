
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

#define ll long long 

using namespace std;

string funct(string str) 
{
    string revstr = str;
    revstr.reserve();
    for(int i = 0; i < revstr.size(); i++) {
        if(revstr[i] == 'p')
            revstr[i] = 'q';
        else if(revstr[i] == 'q')
            revstr[i] = 'p';
        else if(revstr[i] == 'w')
            continue;
    }   
    return revstr;
}


int main() {
    ll t, num; 
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        cout << funct(str) << endl;
    }
}