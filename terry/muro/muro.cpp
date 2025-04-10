#include <bits/stdc++.h>
using namespace std;

void solve(int t) {
    int N, Q;
    cin >> N >> Q;

    vector<int> L(Q);
    for (int i = 0; i < Q; i++) {
        cin >> L[i];
    }


    vector<int> Wall(N);

    int counter = 0;

    for(int i=0; i<Q; i++)
    {
        if(L[i] + counter < N)
        {
            counter++; 
        }else
        {
            counter = N-L[i]+1;
        }
       
    }


    int risposta = counter;

    cout << "Case #" << t << ": " << risposta << endl;
}

int main() {
    // se preferisci leggere e scrivere da file
    // ti basta decommentare le seguenti due righe:

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        solve(t);
    }

    return 0;
}
