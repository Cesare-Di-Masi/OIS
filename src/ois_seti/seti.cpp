#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    int ds = 1e9+7;

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    cin>>N;
    vector<int>V(N);
    for(int i=0; i<N; i++)
        cin>>V[i];
    

    vector<int> dp(N+1);

    dp[0] = 1;

    for(int i = 1; i<=N; i++)
    {
        dp[i] = (dp[i-1] + dp[max(0, i - 1 - V[i-1])])%ds;
    }
    cout<<dp[N]<< '\n';    
}