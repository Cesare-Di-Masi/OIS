// NOTA: si raccomanda di usare questo template anche se non lo si capisce completamente.

#include <bits/stdc++.h>

using namespace std;

int main() {
     ifstream cin("input.txt");
     ofstream cout("output.txt");

    int T;
    cin >> T;
    for (int test = 1; test <= T; ++test) {
        int N, F, C;
        cin >> N >> F >> C;

        int D = N;
        
        int nf = 0, nc = 0;
        bool canf = true; 
        bool canc= true;

        while(canf==true)
        {
            if(D>=F)
            {
                nf++;
                D-=F;
            }else
            {
                canf=false;
            }


        }

        while(canc==true)
        {
            if(D>=C)
            {
                nc++;
                D-=C;
            }else
            {
                canc=false;
            }


        }
        


        cout << "Case #" << test << ": ";
        cout << nf << " " << nc << endl;
    }

    return 0;
}

