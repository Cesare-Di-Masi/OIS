#include <bits/stdc++.h>

using namespace std;


vector<vector<short>> memo(5001, vector<short>(10_001, -1));
vector<short> L,B;

int N,X;

int solve(int pos, int mon)
{
    if(pos>=N) return 0;
    if(memo[pos][mon] >= 0) return memo[pos][mon];
    int res = 0;

    if(B[pos] <= mon)
    {
        res = solve(pos+1, mon -B[pos]) + L[pos];
    }
    res = max(res, solve(pos+1, mon));
    return memo[pos][mon] = res;

}

int main() {

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    cin>>N>>X;

    L.resize(N);
    B.resize(N);

    for(int i=0; i<N; i++)
    {
        cin>>L[i]>>B[i];
    }

    cout<<solve(0,X);
    
}
