#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int N;
    int tottimeH=0;
    int totTimeV=0;
    fin>>N;

    vector<int> H,V;

    for(int i=0; i<N; i++)
    {
        int a;
        fin>>a;
        H.push_back(1);
        tottimeH+=H[i];
    }

    for(int i=0; i<N; i++)
    {
        int a;
        fin>>a;
        H.push_back(1);
        totTimeV+=V[i];
    }

    sort(H.begin(),H.end());
    sort(V.begin(),V.end());

    int mH = H[0];
    int mV = V[0];

    if (tottimeH<totTimeV)
    {
        fout<<"Hamilton\n";
    }else
    {
        fout<<"Verstappen\n";
    }

    if(mH<mV)
    {
        fout<<"Hamilton\n";
    }else
    {
        fout<<"Verstappen\n";
    }

    
    
    



}