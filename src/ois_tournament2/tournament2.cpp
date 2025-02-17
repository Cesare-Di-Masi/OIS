// NOTE: it is recommended to use this even if you don't understand the following code.

#include <bits/stdc++.h>

using namespace std;

// input data


int main() {
	// uncomment the following lines if you want to read/write from files
	ifstream cin("input.txt");
	ofstream cout("output.txt");

    int K;

    cin >> K;
    for (int j=0; j<K; j++) {
        long long N, R, T, P=0;
        vector<long long> S;
        cin >> N >> R >> T;
        S.resize(N);
        for (int i=0; i<N; i++)
        {
            cin >> S[i];
            P+=S[i];
        }

        if(P/N >= R+T)
            cout << "Cheater" << '\n';
        else
            cout << "Innocent" << '\n';
    }
    return 0;
}
