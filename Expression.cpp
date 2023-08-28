
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    int n1,n2,n3;
    int res1,res2,res3,res4;

    std::cin >> n1;
    std::cin >> n2;
    std::cin >> n3;

    res1 = n1 + n2 + n3;
    res2 = n1 * n2 * n3;
    res3 = (n1 + n2) * n3;
    res4 =  n1 * (n2 + n3);

    std::cout << std::max(std::max(res1,res2), std::max(res3, res4)) << std::endl;
}