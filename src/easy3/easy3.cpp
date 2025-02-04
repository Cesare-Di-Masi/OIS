#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int N,S,mP1=-1,mP2=-1,mD1=-1,mD2=-1;
    int SP,SD;

    fin >> N;

    for(int i=0; i<N;i++)
    {
        fin >> S;

        if(S%2==0)
        {

            if(S>mP1)
            {
                mP2=mP1;
                mP1=S;
            }else if (S>mP2)
            {
                mP2=S;
            }
            

        }else
        {

            if(S>=mD1)
            {
                mD2=mD1;
                mD1=S;
            }else if (S>mD2)
            {
                mD2=S;
            }
            

        }

    }
    
    int sMP=-1, sMD=-1;

    if (mP1>=0 && mP2>=0)
    {
        sMP = mP1+mP2;
    }

    if (mD1>=0 && mD2>=0)
    {
        sMD = mD1+mD2;
    }

    int mS = max(sMD,sMP);
    fout << mS;
    
    return 0;

}