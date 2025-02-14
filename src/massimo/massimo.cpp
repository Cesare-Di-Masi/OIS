#include <bits/stdc++.h>
using namespace std;

int trova_massimo(int N, vector<int> V) {

    int M=-2e9;

    for(int i=0; i<V.size();i++)
    {
        M=max(V[i],M);
    }

    return M;
}


