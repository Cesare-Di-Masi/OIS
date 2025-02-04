#include <bits/stdc++.h>
using namespace std;

int main()
{
        ifstream cin("input.txt");
        ofstream cout("output.txt");

        int N,A,B,ris=-1; cin>>N;

        int V[N];

        for(int i=0; i<N+1; i++)
        {
                cin>>A>>B;
                if((A+B)%2==0)
                        ris = max(ris,A+B);
        }
        cout<<ris;
}