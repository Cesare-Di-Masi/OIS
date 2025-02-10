#include <bits/stdc++.h>

using namespace std;

    int MD(long long a, long long b)
    {
        long long c=1;
        long long r=1;

        while ((c<=a)&&(c<=b)){
            if ((a % c==0)&&(b % c ==0))
                r=c;
            c++;
        }
                
        return r;

    }

    int MC(long long a, long long b)
    {
        long long r;

        r= a*b/MD(a,b);

        return r;
        
    }

int main()
{
    
   ifstream cin("input.txt");
   ofstream cout("output.txt");

    long long t,n; cin>>t;

    for(int h = 0; h<t; h++)
    {
        vector<long long> V;
        cin>>n;
        
        long long r=0;

        for(int i=0; i<n; i++)
        {
            long long a; cin>>a;
            V.push_back(a);
        }

        r=MC(V[0],V[1]);

        for(int i=2; i<n;i++)
        {
            r=MC(r,V[i]);
        }

        cout<<"Case"<<" "<<"#"<<h+1<<":"<<" "<<r<<'\n';



    }

    

}

