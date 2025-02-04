#include <bits/stdc++.h>
using namespace std;
int main()
{

    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;

    vector<int> L;

    fin>>n;

    for(int i=0; i<n; i++)
    {
        int a;
        fin>>a;
        L.push_back(a);
    }

    sort(L.begin(), L.end());

    bool r=true;
    int last=0;

    for(int i=0; i<n; i++)
    {
        

        if(last == L[i])
        {
            r=false;
        }
        
        last = L[i];

    }

    if(r==true){
        fout<<"Ok";
        }
    else{
        fout<<"Impossible";
        }

}

