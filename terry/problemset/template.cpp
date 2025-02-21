#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> bilancia(int N,int M, vector<vector<int>> S) {
    vector<int> ans(M);
    vector<pair<int,int>> couple(M);

    for(int i=0; i<M; i++)
    {
        couple[i].second = i;
        couple[i].first = 0;
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0; j<S[i].size();j++)
        {
            couple[S[i][j]].first +=1;
        }
    }

    sort(couple.begin(),couple.end());

    for(int i = M; i>0; i--)
    {
        ans[i-1] = couple[i-1].second;
    }
    return ans;
    return {};
}

// NON TOCCARE SOTTO QUESTA LINEA

#ifndef EVAL

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> S(N);

    for (vector<int>& i : S) {
        int size;
        cin >> size;
        i.resize(size);
        for (int& j : i)
            cin >> j;
    }

    vector<int> ans = bilancia(N,M,S);

    if (ans.size() == 0)
        cout << "IMPOSSIBLE";
    
    for(int i= ans.size()-1; i>=0; i--)
        cout<< ans[i] << ' ';
    cout<<endl;
}

#endif
