
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n = columnNumber;
        char arr[] = {
             ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
            'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
        };
        int rest = 0;
        while(n) {
            rest = 0;
            if(n >= 26){
                rest = n % 26; 
            
            } 
            else 
                rest = n;
            char letter = arr[rest];
            cout << letter << endl;
        n = n / 26; 
    }
        //string res = arr[div] + arr[rest] ;
        return "";
    }
};

int main() {
    Solution test;
    int n = 701;
    test.convertToTitle(n);  

}
