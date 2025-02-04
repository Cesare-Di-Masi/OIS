#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int N;

    fin>>N;

    vector<int> S,V;

    for(int i=0; i<N; i++)
    {
        int a;
        fin>>a;
        V.push_back(a);
    }

    for(int i=0; i<N; i++)
    {
        int b;
        fin>>b;
        S.push_back(b);
    }

    int bestSum=-1,currentSum=0;
    int last=0;

    for(int i=0; i<N; i++)
    {

        if(last<V[i] && S[i]==1)
        {
            currentSum+=V[i];
            last=V[i];
        }else
        {
            if(bestSum!=currentSum && currentSum > bestSum )
            {
                bestSum=currentSum;
            currentSum=0;
            }
            
        }

    }

    fout<<bestSum;

}