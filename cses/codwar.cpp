
#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string reverse_words(std::string str)
{
  vector<string> strr;
  string res = "";
  stringstream s(str);
  string word;
  while(s >> word) {
    // cout << word << endl;
    reverse(word.begin(), word.end());
    res += word;
    res += " ";
  }
  return res;
}

int main() {
    cout << reverse_words("This is an example!") << endl;
}