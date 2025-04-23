// NOTA: si raccomanda di usare questo template anche se non lo si capisce completamente.

#include <bits/stdc++.h>
using namespace std;

int main() {

    ifstream cin ("input.txt");
    ofstream cout("output.txt");

    int T;
    cin >> T;
    for (int test = 1; test <= T; ++test) {
        long long N;
        cin >> N;
        vector<long long> A(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];

        long long ris = 0;
        
        for(long long i=0; i<N; i++)
        {
           if(A[i]==0&&A[i+1]==0)
           {
                i++;
           }
           else if(A[i]==0&&A[i+1]==1)
           {
                if(i==N-1)
                {
                    ris++;
                }
           }
           else if(A[i]==1&&A[i+1]==0)
           {
                ris++;
           }
           else if(A[i]==1&&A[i+1]==1)
           {
                ris++;
                i++;
           }

        }

        
        cout << "Case #" << test << ": ";
        cout << ris << endl;
    }

    return 0;
}
