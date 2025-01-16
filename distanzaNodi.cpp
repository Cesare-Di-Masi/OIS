#include <bits/stdc++.h>

using namespace std;

//algoritmo di Dijkstià

int main()
{

    int n, m; cin>>n>>m;

    //non sempre n+1, CONTROLLARE SEMPRE IL PROBLEMA in questo proble i nodi vanno da 1 a n (non da 0 a n)
    vector<vector<pair<long long,int>>>g(n+1);


    for(int i=0; i<m; i++)
    {
        int from, to; 
        long long cost; 
        cin>>from>>to>>cost;
        g[from].push_back({to, cost});//make_pair(to,cost)
        g[to].push_back({from,cost});
    }

    vector<bool> vis(n+1, false);
    //2e9 -> 10^9
    //masimmo long long -> 2^18
    vector<long long> dist(n+1, 2e14);
    //i pair ordinano prima per i first e poi per second
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, 1});
    dist[1] = 0;
    while(!pq.empty())
    {
        auto curr = pq.top();
        pq.pop();
        if(vis[curr.second]) continue;
        vis[curr.second] = true;

        for(auto vicino : g[curr.second])
        {
            //distanza
            int d = curr.first + vicino.second;
            //se la distanza che trovo adesso è migliore di quelle di prima
            if(d < dist[vicino.first])
            {
                dist[vicino.first] = d;
                pq.push({d, vicino.first});
            }
        }
    }
    cout<<dist[n]<<"\n";

}