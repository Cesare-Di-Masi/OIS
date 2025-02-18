#include <bits/stdc++.h>

using namespace std;

int rimembra(int N, int K, vector<int> V)
{
    
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N,K; cin>>N>>K;

    vector<int> V(N);

    for(int i=0; i<N; i++)
    {
        cin>>V[i];
    }

    cout<<rimembra(N,K,V);


}


