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

    int D;
    cin >> D;

    vector<int> A(N);
    for (int i = 0; i < N; ++i)
        cin >> A[i];

    vector<int> B(N);
    for (int i = 0; i < N; ++i)
        cin >> B[i];

    string K = "";


    for(int i=0; i<N; i++)
    {
        if(abs(A[i]-B[i])>D)
        {
            K="NO";
            cout<<K;
            return 0;
        }


    }

    cout << "YES" << endl;

    return 0;
}
