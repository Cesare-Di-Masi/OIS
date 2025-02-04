#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream cin ("input.txt");
    ofstream cout("output.txt");

    long long g; cin>>g;

    for(int h=0; h<g; h++)
    {
        deque<long long> player;

        long long n = 0; cin>>n;

        player.resize(n);
        
        for(long long i=0; i<n; i++)
        {
            player[i] = i+1;
        }

        for(long long i=0; i<n-1; i++)
        {
            long long a = player.front();
            player.erase(player.begin()+1);
            player.pop_front();
            player.push_back(a);

            if(player.size() == 1)
            {
                cout<<player[0]<<'\n';
                break;
            }

        }

    }

}

