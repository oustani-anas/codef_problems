
#include <iostream>

using namespace std;

int main()
{
    int p_nbr;
    int petya_sure;
    int vasya_sure;
    int tonya_sure;
    int p_implem;
    cin >> p_nbr; 
    // cout << endl;
    p_implem = 0;
    for (int i = 0; i < p_nbr; i++)
    {
        cin >> petya_sure;
        cin >> vasya_sure;
        cin >> tonya_sure;
        if(petya_sure + vasya_sure + tonya_sure > 1){
            p_implem += 1;
        }
    }
    cout << endl << p_implem;
}