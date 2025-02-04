#include <bits/stdc++.h>
using namespace std;


bool visita(int N, int A[]){
    vector<int>Gemma(N);
    vector<int>Emil(N);

    Gemma[0]=0;
    Emil[N-1]=0;
    for(int i=1; i<N;i++)
    {
        //gemma arriva all'attrazione i dopo il tempo di visita dell'attrazione precedente
        Gemma[i]=Gemma[i-1]+A[i-1];
        //cout<<"gemma"<<i<<" "<<Gemma[i]<<endl;
        Emil[N-1-i]=Emil[N-1-i+1]+A[N-1-i+1];
        //cout<<"Emil"<<N-1-i<<" "<<Emil[N-1-i]<<endl;
    }

    for(int i=0; i<N;i++)
    {
        if(Gemma[i]==Emil[i])
            return true;
    }
    return false;
}