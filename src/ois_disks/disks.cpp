#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int A, B;
    long T;

    fin>>A>>B>>T;

    int tempoAttivita=B-A;
    int tempoInattivita=24-tempoAttivita;

    long giorniCompletiDown=T/24;
    long oreRimanentiDown=T%24;

    long oreAttivitaInDownRimanenti = oreRimanentiDown-tempoInattivita;
    if(oreAttivitaInDownRimanenti<0)
        oreAttivitaInDownRimanenti=0;

    long minimoDown=(giorniCompletiDown*tempoAttivita)+oreAttivitaInDownRimanenti;

    fout<<minimoDown;

    return 0;
}