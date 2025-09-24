
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>

int main()
{
    int n_colns;
    int sum_cubes = 0;
    int cubes_per_colns;
    std::cin >> n_colns;
    std::vector<int> cubes;
    for (size_t i = 0; i < n_colns; i++)
    {
        int ai;
        std::cin >> ai;
        sum_cubes += ai;
        cubes.push_back(ai);
    }
    int tmp = 0;
    sort(cubes.begin(), cubes.end());
    for (size_t i = 0; i < cubes.size(); i++)
    {
        std::cout << cubes[i] << " ";
    }
}