#include <string>
#include <iostream>
#include <vector>
using namespace std;

int dp(int N,int pos, int counter, vector<int>&X, vector<int>&Y)
{

    if(N<=pos)
    return -1;

    int possible=0;

    for(int i=0; i)

}

void solve(int t) {
    int N;
    cin >> N;

    vector<int> X(N), Y(N);
    for(int i = 0; i < N; ++i) {
        cin >> X[i] >> Y[i];
    }

    int risposta = 42;

    

    
    cout << "Case #" << t << ": " << risposta << "\n";
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
