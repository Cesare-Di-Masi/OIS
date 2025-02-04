#include<bits/stdc++.h>
using namespace std;

int main()
{

    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int K=0,N=0;
    vector<int> L;

    fin>>N;
    fin>>K;

    int r=K-1,l=0;

    for(int i=0; i<N; i++)
    {
        int a;
        fin>>a;
        L.push_back(a);
    }

    int currentSum=0;

    for(int i=0; i<K; i++)
    {
        currentSum+=L[i];
    }

    int bestSum=currentSum;

    for(int i=1; i<=N-K; i++)
    {
        
        currentSum= currentSum-L[l]+L[r+1];

        bestSum = max(bestSum,currentSum);

        l++;
        r++;
        
    }

    fout<<bestSum;


}