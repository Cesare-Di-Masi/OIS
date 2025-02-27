#include <bits/stdc++.h>

#define MAXN 10000

using namespace std;

int ricorsiva(int N,int pos,int B[],vector<vector<int>>&L)
{
    if(pos>N)
    return 0;

    int prendo = 0,nonprendo=0;

    if(L[pos].size()>0)
    {
        prendo = B[pos];
        for(int i=0;i<L[pos].size();i++)
            nonprendo += ricorsiva(N,L[pos][i],B,L);

    }else
    {
        prendo = B[pos];
    }

    return max(prendo,nonprendo);

}

int recluta(int N, int B[], int C[]) {
    
    //matrice per andare a pescare i valori nel array B
    vector<vector<int>> L(N);

    int start = 0;

    for(int i=0;i<N;i++)
    {
        if(C[i] != -1)
        L[C[i]].push_back(i);
        else
        start = i;
    }

    return ricorsiva(N,start,B,L);

}


int B[MAXN], C[MAXN];

int main() {
    FILE *fr, *fw;
    int N, i;
    
    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
    assert(1 == fscanf(fr, "%d", &N));
    for(i=0; i<N; i++)
        assert(2 == fscanf(fr, "%d %d", &B[i], &C[i]));
    
    fprintf(fw, "%d\n", recluta(N, B, C));
    fclose(fr);
    fclose(fw);
    return 0;
}
