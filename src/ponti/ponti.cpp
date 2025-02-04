#include <bits/stdc++.h>

using namespace std;

void bfs(vector<vector<int>>&g, vector<bool>&vis, int start)
{
    queue<int> q;
    q.push(start);
    vis[start] = true;
    while(!q.empty())
    {
        int curr = q.front();
        q.pop();

        for(int vicino : g[curr])
        {
            if(!vis[vicino])
            {
                vis[vicino] = true;
                q.push(vicino);
            }
        }
    }
}

int main()
{

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n, m; cin>>n>>m;

    vector<vector<int>>g(n);

    for(int i=0; i<m; i++)
    {
        int from, to; cin>>from>>to;
        g[from].push_back(to);
        g[to].push_back(from);
    }

    vector<bool> vis(n,false);

    int componenti = 0;
    for(int i=0; i<n; i++)
    {
        if(!vis[i])
        {
            bfs(g, vis, i);
            componenti++;
        }
    }
    cout<<componenti-1;

}

