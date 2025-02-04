#include <bits/stdc++.h>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main()
{
    int n, k, cont, l;
    fin>>n>>k;
    string parola;
    getline(fin, parola);

    cont=0;
    for(int i=0; i<n; i++)
    {
        //leggo la parola
        getline(fin, parola);
        l = parola.length();
        //vedo se poso stamparla
        if(cont + l<= k)
        {
             //la stampo e aumento il conteggio conteggiando anche lo spazio
            fout<<parola<<" ";

        }
        else{
            cont = 0;
            fout<<endl<<parola<<" ";
        }

        cont += l+1;

    }


    return 0;
}