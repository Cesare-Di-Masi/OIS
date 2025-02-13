#include <bits/stdc++.h>

using namespace std;


int main()
{

   

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int t=0; cin>>t;

    for(int h=0; h<t; h++)
    {
        int P[4];  bool found = false;

        for(int i=0; i<4; i++)
        {
            cin>>P[i];
        }

        int n=0; cin>>n;

         map<string,vector<int>> S;
         map<string,int> E;

        for(int i=0; i<4; i++)
        {
            string str;
            cin>>str;
            for(int j=0; j<str.length()-n; j++)
            {
                string used = str.substr(j,n);

                if (S[used].size() < 4) 
                S[used].resize(4, -1); 
                
                
                S[used][i] = j;
                E[used]++;

                if(E[used] == 4 && !found)
                {
                    
                    cout<< "Case #" << h+1 << ": ";

                    for(int k=0; k<4;k++)
                    {
                        cout<< S[used][k];
                        cout<<" ";
                    }
                    cout<<'\n';
                    
                    found = true;

                }

            }
        }

        
    }



}