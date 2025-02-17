// NOTE: it is recommended to use this even if you don't understand the following code.

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N;
    cin >> N;

    vector<pair<int,int>> P(N);
    for (int i = 0; i < N; i++)
    {
        cin >> P[i].first;
        P[i].second=i;
    }

    int winner = 0, i = 0, stop = N/2;


    while(P.size()>2)
   {
        if(P[i].first>P[i+1].first)
        {
            P.erase(P.begin() + i + 1);
        }else
        {
            P.erase(P.begin() + i);
        }

        if(i >= stop-1)
        {
            stop /= 2;
            i = 0;
        }else
            i++;

   }

   winner = max(P[0].first, P[1].first);
   
   if(winner == P[0].first)
   {
        cout<<P[0].second << " " << P[1].second;
   }else
   {
        cout<<P[1].second << " " << P[0].second;
   }



    return 0;
}
