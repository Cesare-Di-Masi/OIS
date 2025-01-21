#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    int N;
    long spesa = 0;

    fin>>N;

    vector<int> P(N);

    for(int i = 0 ; i<N; i++)
    {
        fin>>P[i];
    }
    //ordino
    sort(P.begin(), P.end());

    //parto dall'ultimo e prendo a gruppi di 3 il 3°(quello che costa meno) non lo pago
    for(int i=N-1; i>=0; i--)
    {
        if((N-i)%3!=0)
        {
            spesa+=P[i];
            //cout<<i<<" "<<spesa<<endl;
        }

    }

    fout<<spesa;
    return 0;
}