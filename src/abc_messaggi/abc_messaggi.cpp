#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N; cin>>N;
    int R; cin>>R;

    map<string,vector<string>> m,n;

    for(int i=0; i<N; i++)
    {
        string inv, ric;
        cin>>inv>>ric;
        m[inv].push_back(ric);
        n[ric].push_back(inv);
    }

    string name, tipo;

    for(int i=0; i<R; i++)
    {

        cin>>name>>tipo;

        if(tipo=="INVIATI")
        {
            cout<<m[name].size()<<" ";

            for(string a: m[name])
            {
                cout<<a<<" ";
            }
            cout<<"\n";
        }else
        {
            cout<<n[name].size()<<" ";

            for(string a: n[name])
            {
                cout<<a<<" ";
            }
            cout<<"\n";
        }
    }

}