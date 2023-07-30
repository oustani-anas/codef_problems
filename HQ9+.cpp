
#include <iostream>
#include <string>
#include <cstring>


int main()
{
    std::string input;
    std::cin >> input;
    for (size_t i = 0; i < input.size(); i++)
    {
        if(input[i] == 'H' || input[i] == 'Q' || input[i] == '9' || input[i] == '+')
            std::cout << "YES" << std::endl;
    }
}