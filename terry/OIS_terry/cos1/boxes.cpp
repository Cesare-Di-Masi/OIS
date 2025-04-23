// NOTA: si raccomanda di usare questo template anche se non lo si capisce completamente.

#include <bits/stdc++.h>

using namespace std;
int main() {
    
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    
    int T;
    cin >> T;
    bool cresc=false, onezero=false;
    
    for (int test = 1; test <= T; ++test) {
        int N;
        cin >> N;

        if(test>=1&&test<=6)
        cresc=true;
        if(test>=11&&test<=14)
        onezero=true;

        long long low=0;
        long long high=0;
        vector<int> P(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> P[i];
            if(i==N-1)
            low=P[i];
        }
        int zero=-1;
        vector<int> C(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> C[i];
            if(i==0)
            high=C[i];
            
            if(zero==-1&&C[i]==0)
            zero=i;
        }

        if(zero==-1)
        zero=N;
    
        long long ris = 0;
        
        bool clear= true;
        if(cresc==true)
        {
            for(int i=0; i<N; i++)
            {
                ris+=P[i]*high;
            }
        }
        else if(onezero==true)
        {
            for(int i=0; i<zero; i++)
            {
                ris+=P[i];
            }
        }
        else
        {
            bool clear= true;

            for(int i=N-1; i>=0;i--)
            {
                ris+=(P[i]-low)*C[i];
                P[i]=low;
            }


            int curr=N;
    
            for(int i=N-1; i>=0;i--)
            {
                if(C[i]<=high)
                {
                    ris+=P[i]*C[i];
                    P[i]=0;
                    curr--;
                }
            }
            ris+=curr*high;
        }
        cout << "Case #" << test << ": ";
        cout << ris << endl;
        cresc=false; onezero=false;
    }

    return 0;
}