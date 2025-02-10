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

    vector<vector<int>> A(N + 1, vector<int>(M + 1));
    for (int j = 1; j <= N; ++j) {
        for (int i = 1; i <= M; ++i)
            cin >> A[j][i];
    }

    int R = 0;
    vector<int> x1(2*N*M), y1(2*N*M), x2(2*N*M), y2(2*N*M), V(2*N*M);


    // INSERT YOUR CODE HERE


    cout << "YES" << endl;
    cout << R << endl;
    for (int i = 0; i < R; ++i)
        cout << x1[i] << " " << y1[i] << " " << x2[i] << " " << y2[i] << " " << V[i] << endl;

    return 0;
}
