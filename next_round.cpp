
#include <iostream>

using namespace std;

int main()
{
    int k;
    int n;
    int result;

    cin >> n; // number of participants
    cin >> k; // the k-th place finisher

    int parts[n];
    for (size_t i = 1; i <= n; i++)
    {
        cin >> parts[i];
    }
    
    result = 0;
    for (size_t i = 1; i <= n; i++)
    {
        if(parts[i] >= parts[k] && parts[i] > 0)
            result += 1;
    }
    cout << result;
}