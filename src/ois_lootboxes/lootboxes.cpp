#include <bits/stdc++.h>

using namespace std;

#define MAXN 5000

int memo[5000];
vector<int> L,B;

int solve(int pos, int mon)
{
    if(pos < 0 || mon < 0) return -1;

    int a = solve(pos-1, mon);
    memo[pos-1] = memo[pos]+L[pos];
    int b = solve(pos-1,mon-B[pos]);
    return memo[pos];
}

int main() {

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N,X; cin>>N>>X;

    L.resize(N);
    B.resize(N);

    for(int i=0; i<N; i++)
    {
        cin>>L[i]>>B[i];
    }

    cout<<solve(N,X);
    
}
