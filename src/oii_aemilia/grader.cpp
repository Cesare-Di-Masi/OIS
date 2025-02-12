#include <bits/stdc++.h>
using namespace std;

vector<int> verifica(int N, vector<int> M) {
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int l=2e9, s,counter=0;

    vector<int> T(N);
    vector<int> Z(N);
    vector<int> Y(N);

    T=M;
    Y=M;

    sort(Y.begin(), Y.end());

    int e=s;
    Z[0] = s;
    counter = 0;

    while(counter < N)
    {
        bool extended = false;

        if(e+1 < N && T[e+1] == Y[counter])
        {
            e++;
            Z[counter] = e;
            counter++;
            extended = true;
        }
        if(s-1 >= 0 && T[s-1] == Y[counter])
        {
            s--;
            Z[counter] = s;
            counter++;
            extended = true;
        }

        if (!extended)
        {
            cout << 0 << '\n';
            return vector<int>(1,0);
        }
    
    }

    return Z;

}


int main() {

    int N;
    vector<int> T(N);

    for (int i = 0; i < N; i++)
    {
        cin >> T[i];
    }


    vector<int> S = verifica(N, T);

    cout << S.size() << '\n';
    for (int i = 0; i < S.size(); i++)
        cout << S[i] << ' ';
    cout << '\n';
}