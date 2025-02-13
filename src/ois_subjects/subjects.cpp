#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long N,M; cin>>N>>M;

    long long counter = 0;

    vector<long long> K(N);

    vector<vector<long long>> S(N);
    vector<vector<bool>> F(1005,vector<bool>(1005,false));
    vector<pair<long long, long long>> T;

    

    for(int i=0; i<N; i++)
    {
        cin>>K[i];

        for(int j=0;j<K[i];j++)
        {
            int a=0; cin>>a;
            
            S[i].push_back(a);

        }
    }

    for(int i=0; i<N; i++)
    {

        for(int j=0; j<K[i]-1; j++)
        {
            for(int l=j+1;l<K[i]; l++)
            {
                F[S[i][j]][S[i][l]] = true;
                F[S[i][l]][S[i][j]] = true;
            }
        }

    }

    for(int i=1;i<=M;i++)
    {

        for(int j=1; j<=M;j++)
        {
            if(F[i][j] == 0 && i!=j)
            {
                counter++;
                F[j][i] = true;
                T.push_back({i,j});
            }


        }

    }

    cout<<counter<<'\n';

    for(int i=0; i<T.size(); i++)
    {
        cout<<T[i].first<<" "<<T[i].second<<'\n';
    }


}