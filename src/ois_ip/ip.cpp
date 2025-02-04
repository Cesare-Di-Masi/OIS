#include <bits/stdc++.h>
using namespace std;


int main()
{
    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    vector<int>f(4);
    vector<int>s(4);
    vector<int>d(4);

    string first, second;

    fin>>first>>second;

    int pos;
    string delimiter = ".";
    int i =0;
    //finchè trovo un . (potevo fare anche un for che dura 3 iterazioni
    while ((pos = first.find(delimiter)) != string::npos)
    {
        //estrapolo il numero
        string token = first.substr(0, pos);
        //converto a intero e lo salvo nel vector
        f[i]=stoi(token);
        //cancello il token e il punto dalla stringa
        first.erase(0, pos + delimiter.length());
        
        i++;
    }
    //converto l'ultimo valore rimasto
    f[i] = stoi(first);

    //faccio la stessa cosa su second 
    //(sapendo che l'indirizzo è sempre ben formattato avrei potuto 
    //fare un solo ciclo che si ripeteva 3 volte ed al suo interno avrei potuto calcolare sia il pos di first sia quello di second)
    i =0;
    while ((pos = second.find(delimiter)) != string::npos)
    {
        string token = second.substr(0, pos);
        second.erase(0, pos + delimiter.length());
        s[i]=stoi(token);
        i++;
    }
    s[i] = stoi(second);


//per il risultato ho bisogno di un long
//ogni ottetto mi permette di generare una potenza di 256 valori
    long res = 1;
    for(int i=0; i<4;i++)
    {
        res = res+ (s[i]-f[i])*pow(256,3-i);
    }

    fout<<res;

    return 0;
}