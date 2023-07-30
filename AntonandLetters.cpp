
#include <iostream>
#include <string>
#include <cstring>
#include <ctype.h> 

int already_exist(std::string str, int c, int id)
{
    for (size_t i = 0; i < id; i++)
    {
        if(str[i] == c)
            return true;
    }
    return(false);
}

int main(int ac, char **av)
{
    int count = 0;
    std::string lett;
    //std::cin >> lett;
    std::getline(std::cin, lett);
    
    if(lett[0] != '{' || lett[lett.size() - 1] != '}'){
        //std::cout << "test\n" ;
        return 0;
    }
    for (size_t i = 0; i < lett.size(); i++)
    {
        if(isalpha(lett[i]) && already_exist(lett, lett[i], i) == false)
            count++;
    }
    std::cout << count << std::endl;
}