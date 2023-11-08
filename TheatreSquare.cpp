
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#define ll long long
#define dd double
#define endl '\n'
 
using namespace std;
 
int main()
{
    dd n, m, a;
    dd n_a, m_a;
    cin >> n >> m >> a;
    n_a = ceil(n / a);
    m_a = ceil(m / a);
    cout << fixed << setprecision(0) << n_a * m_a << endl;
}