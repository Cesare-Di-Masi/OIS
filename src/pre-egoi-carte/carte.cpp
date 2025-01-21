#include <vector>

using namespace std;

int scarta(int C, vector<bool> L, vector<bool> D, vector<bool> N)
{
    int avanzo=0;
    for (int i = 0; i < C; i++)
    {
        if(L[i]+D[i]+N[i]!=1)
        {
            avanzo += 1;
        }
    }

    return avanzo;
}

