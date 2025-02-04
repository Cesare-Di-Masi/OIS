#include <bits/stdc++.h>

using namespace std;


int main()
{
    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    int n,ta,td;
    
    vector<int> arrivi;
    vector<int> partenze;

    fin>>n;

    for(int i=0; i<n; i++)
    {
        fin>>ta>>td;
        arrivi.push_back(ta);
        partenze.push_back(td);

    }

    sort(arrivi.begin(), arrivi.end());
    sort(partenze.begin(), partenze.end());


    int ia=0, id=0;
    long persone =1;
    long stretteDiMano=0;

    //finche non sono esauriti i due insiemi
    while(!(ia==n && id==n))
    {
        //se c'é un arrivo
        if(id==n || (id<n  && ia<n && arrivi[ia]<partenze[id]))
        {
            stretteDiMano += persone;
            persone += 1;

            ia++;
        }
        else{
            //se éuna partenza
            stretteDiMano += persone-1;
            persone -= 1;
            id++;
        }

    }

    fout<<stretteDiMano;

    return 0;
}