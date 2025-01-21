#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    int n;
    fin>>n;

    vector <int>t(n);

    for(int i=0; i<n; i++)
    {
        fin>>t[i];
    }

    int attesa=t[0];
    int riordini=0;

    for (int i=1; i<n; i++)
    {

        if(t[i]+i<attesa)
        {
            riordini+=1;
            attesa= t[i]+i;
        }

    }

    fout<<attesa<<" "<<riordini;
}

