#include <bits/stdc++.h>

using namespace std;

int main()
{
   
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int N,S,MAX=-1000;

    fin >> N;

    for(int I=0; I<N; I++)
    {

        fin >> S;
        if(S>MAX){  MAX=S;  }

    }

    fout << MAX;
    MAX=0;

}