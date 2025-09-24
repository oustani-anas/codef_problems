
#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string word;
    int upp = 0, low = 0;
    std::cin >> word;
    for (size_t i = 0; i < word.size(); i++)
    {
        if(std::isupper(word[i]))
            upp++;
        if(std::islower(word[i]))
            low++;
    }
    if(low >= upp){ 
        for (size_t i = 0; i < word.size(); i++)
        {
            word[i] = std::tolower(word[i]);
        }
    }   
    else if(upp > low) {
        for (size_t i = 0; i < word.size(); i++)
        {
            word[i] = std::toupper(word[i]);
        }
    }
    std::cout << word << std::endl;
}