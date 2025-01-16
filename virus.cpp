#include <bits/stdc++.h>

using namespace std;


int main()
{

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int t=0; cin>>t;

    for(int h=0; h<t; h++)
    {
        int P[4]; 

        for(int i=0; i<4; i++)
        {
            cin>>P[i];
        }

        int n=0; cin>>n;

        map<string,int[4]> S;
        map<string,int> E;

        for(int i=0; i<4; i++)
        {
            string str;
            cin>>str;
            for(int j=0; i<str.length()-4; j++)
            {
                string used;
                for(int k=j;k<j+4;k++)
                {
                    used+=str[k];
                }

                S[used][i] = j;
                E[used]++;

                if(E[used] == 4)
                {
                    
                    cout<< "Case" << " " << "#" << h+1 << ":" << " ";

                    for(int k=0; k<4;k++)
                    {
                        cout<< S[used][k];
                        cout<<" ";
                    }
                    cout<<'\n';
                    
                }

            }
        }

        
    }



}