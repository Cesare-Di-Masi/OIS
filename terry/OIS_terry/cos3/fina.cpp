// NOTA: si raccomanda di usare questo template anche se non lo si capisce completamente.

#include <bits/stdc++.h>

using namespace std;

int dp(int N,int day,int pos, vector<int>&V, vector<int>&G,int counter ,int ric)
{

    if(day>N)
    return -1;
    if(pos>=N)
    return -1;

    int change=0, notChange=0;

    if(day==N)
    {
        return ric;
    }else
    {
        change=dp(N,day+1,day+1,V,G,1,V[day+1]);
        notChange=dp(N,day+1,pos,V,G,counter+1,V[pos]+G[pos]*counter);
    }

    return max(change,notChange);


}

int main() {
   // decommenta le due righe seguenti se vuoi leggere/scrivere da file
     ifstream cin("input.txt");
     ofstream cout("output.txt");

    int T;
    cin >> T;
    for (int test = 1; test <= T; ++test) {
        int N;
        cin >> N;

        vector<int> V(N);
        for (int i = 0; i < N; ++i)
            cin >> V[i];

        vector<int> G(N);
        for (int i = 0; i < N; ++i)
            cin >> G[i];

        int ris = dp(N,0,0,V,G,0,0);



        cout << "Case #" << test << ": ";
        cout << ris << endl;
    }

    return 0;
}
