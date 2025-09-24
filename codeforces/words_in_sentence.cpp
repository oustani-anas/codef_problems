#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>
#include <bitset>
#include <array>

#define ll long long
#define endl '\n'

// how many word in a sentence considering that just one space is used between
// words

using namespace std;

int howManyW(string sent) {
    int words = 0;
    for(ll i = 0; i < sent.size(); i++){
        if(sent[i] == ' ')
            words++;        
    }
    words++;
    return words;
}


int main() {
    string stentnce = "hello let see how many word";
    cout << howManyW(stentnce);
}