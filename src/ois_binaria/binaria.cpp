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

    int N;
    cin >> N;

    vector<int> T(N);
    for (int i = 0; i < N; ++i)
        cin >> T[i];

    int B = 0;


    // INSERT YOUR CODE HERE


    cout << B << endl;

    return 0;
}
