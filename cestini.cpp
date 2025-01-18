#include <bits/stdc++.h>

using namespace std;

void muoviOcerca(int t)
{
    int N,M,H; cin>>N>>M>>H;
    string S; cin>>S;
    vector<string> C(M);

    C[0] = S;

    

    string finalCheck;

    for(int i=0; i<H; i++)
    {
        char Q; int a,b; 
        cin>>Q>>a>>b;

        if(Q=='s')
        {
            char l = C[a].back();
            C[a].pop_back();
            C[b].push_back(l);
        }
        else
        {
            char l = C[a].at(b);
            finalCheck.push_back(l);
        }

    }

    cout << "Case #" << t << ": " << finalCheck << endl;

}

int main()
{

    //ifstream cin("input.txt");
    //ofstream cout("output.txt");

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int test=0; cin>>test;

    for(int t=0; t<test; t++)
    {
        muoviOcerca(t+1);
    }

}