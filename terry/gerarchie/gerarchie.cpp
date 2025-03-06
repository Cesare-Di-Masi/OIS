#include <bits/stdc++.h>

const int MAXN = 1000;

using namespace std;

int counter = 0;

int ricorsiva(int N,int pos,int B[],vector<vector<int>>& L)
{
    if(pos>N)
    return 0;

    int scendi=0,scendiMax=0, nonscendi=0;
    if(L[pos].size()>0)
    {
        nonscendi = B[pos];
        for(int i=0; i<L[pos].size();i++)
        {
            scendi = ricorsiva(N,L[pos][i],B,L);
            scendiMax = max(scendiMax,scendi);
        }
    }else
    {
        nonscendi = B[pos];
    }

    if(nonscendi < scendiMax)
    counter++;

    return max(nonscendi,scendiMax);

}

int solve() {
    counter =0;
    int N;
    cin >> N;

    int start = 0;  // memorizza qui la risposta
    int R[MAXN], C[MAXN];
    vector<vector<int>> L(N);

    for (int i=0; i<N; i++) {
        cin >> R[i] >> C[i];
        if(R[i]!=-1)
        L[C[i]].push_back(i);
        else
        start =  i;
    }

    ricorsiva(N,start,C,L);
    return counter;
}

int main() {
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T, t;
    scanf("%d", &T);

    for (t = 1; t <= T; t++) {
        cout << "Case #" << t << ": " << solve() << endl;
    }
}