#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> memo (500004,vector<int>(1000004,-1));

long long result(int pos,int left,int currentzone,int T,int N,int X, vector<int> K, vector<vector<int>> W, vector<vector<int>> F,bool inZone)
{
    if(currentzone>=N)
    return 0;
    if(pos >= K[currentzone])
    return 0;
    if(left<=T)
    return 0;

    long long entered, notEntered, exitZone;

    if(inZone == false)
    {
        //entro nella zona
        entered = result(pos,left-X,0,T,N,X,K,W,F,true);
        //non entro nella zona
        notEntered = result(pos,left,currentzone+1,T,N,X,K,W,F,false);
        //non posso uscire
        exitZone = 0;
    }else
    {
        //entro nella giostra
        entered = result(pos+1,left-W[currentzone][pos],currentzone,T,N,X,K,W,F,true)+F[currentzone][pos];
        //non vado nella giostra
        notEntered = result(pos+1,left,currentzone,T,N,X,K,W,F,true);
        //esco dalla zona e vado alla prossima
        exitZone = result(0,left,currentzone+1,T,N,X,K,W,F,false);
    }

    return max(entered,notEntered,exitZone);

}


long long visita(int N, int X, int T, vector<int> K, vector<vector<int>> W, vector<vector<int>> F) 
{
    return result(0,T,0,T,N,X,K,W,F,false);
}

// NON TOCCARE SOTTO QUESTA LINEA

#ifndef EVAL

int main() {
    int N, X, T;
    cin >> N >> X >> T;

    vector<int> K(N);
    vector<vector<int>> W(N);
    vector<vector<int>> F(N);

    for (int i = 0; i < N; i++) {
        cin >> K[i];
        W[i].resize(K[i]);
        F[i].resize(K[i]);
        for (int j = 0; j < K[i]; j++) {
            cin >> W[i][j] >> F[i][j];
        }
    }

    cout << visita(N, X, T, K, W, F) << endl;

    return 0;
}

#endif
