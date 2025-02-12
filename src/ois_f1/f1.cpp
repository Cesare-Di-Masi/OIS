#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N;
    cin>>N;

    int bestH=100001;
    int bestV=100001;

    int H,V;

    for(int i=0; i<N; i++)
    {
        int a=0;
        cin>>a;
        H+=a;
        if(a<bestH)
        {
            bestH=a;
        }
    }

    for(int i=0; i<N; i++)
    {
        int a=0;
        cin>>a;
        V+=a;
        if(a<bestV)
        {
            bestV=a;
        }
    }

    if (H<V)
    {
        cout<<"Hamilton\n";
    }else
    {
        cout<<"Verstappen\n";
    }

    if(bestH<bestV)
    {
        cout<<"Hamilton"<<'\n';
    }else
    {
        cout<<"Verstappen"<<'\n';
    }
    

    
    return 0;
    



}