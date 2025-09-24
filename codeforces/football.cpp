
#include <iostream>
#include <string>

int main()
{
    int zcount, ocount;
    std::string num;
    std::cin >> num;

    for (size_t i = 0; i < num.size(); i++)
    {
        if(num[i] != '0' && num[i] != '1')
            return(0);
    }
    
    for (size_t i = 0; i < num.size(); i++)
    {
        if(num[i] == '0')
        {
            zcount = 0;
            for (size_t j = i; j < num.size(); j++)
            {
                if(num[j] == '0')
                    zcount++;
                if(zcount == 7){
                    std::cout << "YES" << std::endl;
                    return(0);
                }
                if(num[j] != '0')
                    break;
            }
        }
        else if(num[i] == '1')
        {
            ocount = 0;
            for (size_t j = i; j < num.size(); j++)
            {
                if(num[j] == '1')
                    ocount++;
                if(ocount == 7){
                    std::cout << "YES" << std::endl;
                    return(0);
                }
                if(num[j] != '1')
                    break;
            }
        }
        else
            return(0);
    }
    std::cout << "NO" << std::endl;
}