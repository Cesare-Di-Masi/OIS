#include <bits/stdc++.h>

using namespace std;


int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    //numero di giorni
    int n;
    fin>>n;


    //voglio memorizzare n azioni
    vector<int>azioni(n);

    //leggo tutti i valori delle azioni
    for(int i=0; i<n; i++)
    {
        fin>>azioni[i];
    }

    int maxFluttuazione = 0;

    //verifico i valori delle fluttuazioni consecutive
    for(int i=0; i<n-1; i++)
    {
       maxFluttuazione=max(maxFluttuazione, abs(azioni[i]- azioni[i+1]));
    }

    fout<<maxFluttuazione;
}