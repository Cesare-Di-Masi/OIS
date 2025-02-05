// NOTE: it is recommended to use this even if you don't understand the following code.

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N;
    cin >> N;

    vector<int> P(N);
    for (int i = 0; i < N; ++i)
        cin >> P[i];

    int winner = 0, runnerup = 0;

    vector<int> W(2);


   for(int i = 0; i < N-1; i+=2)
   {

        if(P[i] > P[i+1])
        {
            P.erase(P.begin()+i+1);
        }else
        {
            P.erase(P.begin()+i);
        }

   }

   sort(P.begin(), P.end());  //sorts the vector in ascending order


    cout << P[0] << " " << P[1] << endl;

    return 0;
}
