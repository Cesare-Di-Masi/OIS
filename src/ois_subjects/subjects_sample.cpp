// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    int N, M;
    cin >> N >> M;

    vector<vector<int>> S(N);
    vector<int> K(N);
    for (int j = 0; j < N; ++j) {
        cin >> K[j];
        S[j].resize(K[j]);
        for (int i = 0; i < K[j]; ++i)
            cin >> S[j][i];
    }

    int P = 0;
    vector<vector<int>> ans(1000000, vector<int>(2));


    // INSERT YOUR CODE HERE


    cout << P << "\n";
    for (int j = 0; j < P; ++j) {
        for (int i = 0; i < 2; ++i)
            cout << ans[j][i] << " ";
        cout << "\n";
    }

    return 0;
}
