#include <bits/stdc++.h>

using namespace std;

int main()
{

   ifstream cin("input.txt");
   ofstream cout("output.txt");

    int a; cin>>a;
    map<int,int> dist;
    dist[a]=0;
    queue<int>q;
    q.push(a);

    while(!q.empty())
    {
        int curr = q.front();
        q.pop();

        int newDist = dist[curr] + 1;
        
        if(curr == 0)
        {
            cout << dist[curr] << "\n";
            return 0;
        }

        //aggiungo 1
        if(!dist.count(curr + 1))
        {
            dist[curr+1] = newDist;
            q.push(curr+1);
        }

        //tolgo 1
        if(!dist.count(curr - 1))
        {
            dist[curr - 1] = newDist;
            q.push(curr - 1);
        }

        //moltiplico X 2
        if(!dist.count(curr * 2))
        {
            dist[curr * 2] = newDist;
            q.push(curr * 2);
        }

        //divido X 3 o potenza di 3
        if(curr%3 == 0)
        {
            //divido finchè posso dividere X 3
           while(curr%3 == 0) curr/=3;
           if(!dist.count(curr))
           {
             dist[curr] = newDist;
             q.push(curr);
           }
        }

    }

}