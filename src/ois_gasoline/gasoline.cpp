#include <bits/stdc++.h>
using namespace std;

int main()
{

    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int N;
    fin>>N;

    vector<int> P;
    vector<int> G;

    for(int i=0; i<N;i++)
    {
        int a;
        fin>>a;
        P.push_back(a);
    }

    for(int i=0; i<N;i++)
    {
        int a;
        fin>>a;
        G.push_back(a);
    }

    int last=0;
    int lastPrice=P[last];
    int totPrice=lastPrice*G[last];

    for(int i=1; i<N; i++)
    {

        int count=i;
        while(G[count]*lastPrice< P[count]*G[count])

        if(G[i]*lastPrice < P[i]*G[i] )
        {
            totPrice+=G[i]*lastPrice;
        }
        else
        {
            totPrice+=P[i]*G[i];
        }

        lastPrice=P[i];

    }

    fout<<totPrice;

}