#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int pollice_verde(int N, vector<int> H){
    int ris=1; //parto dal presupposto che innaffio che il primo vaso
    int indiceUltimoVasoInnaffiato = 0;
    //per tutti gli altri vasi
    for(int i=1; i<N; i++)
    {
        //verifico se NON è innaffiato dal vaso precedente
        if(H[i]>=H[i-1])
        {
            ris = ris+1;//devo innaffiare il vaso
            //(nel caso in cui il precedente sia stato innaffiato direttamente)
            if(indiceUltimoVasoInnaffiato == i-1)
            {
                //controllo se questo vaso può innaffiare il precedente
                if(H[i]>H[i-1])
                {
                     ris = ris-1; //tolgo l'innaffio diretto del vaso precedente
                }
            }
            indiceUltimoVasoInnaffiato = i;
        }
    }


    return ris;
}