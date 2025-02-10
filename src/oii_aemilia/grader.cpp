#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int l=2e9, s,counter=0;
    cin >> N;

    vector<int> T(N);
    vector<int> Z(N);
    for (int i = 0; i < N; i++)
    {
        cin >> T[i];
        if(T[i]<l)
        {   
            l=T[i];
            s=i;
        }
    }

    int e=s;

    Z[0] = s;

    while(counter<N)
    {

        if(T[e+1]==T[e])
        {
            Z[counter] = e+1;
            counter++;
            e++;
        }
        if(T[s-1]== T[s])
        {
            Z[counter] = s-1;
            counter++;
            s--;
        }

        if(T[e+1] == l+1)
        {
            Z[counter] = e+1;
            counter++;
            
        } 

    }



    
    cout << P.size() << '\n';
    for (int i = 0; i < P.size(); i++)
        cout << P[i] << ' ';
    cout << '\n';
}
