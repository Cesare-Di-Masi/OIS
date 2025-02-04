#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");


   int N,S=1;
   fin>>N;

   while(N!=1)
   {
       S++;
     if(N%2==0)
        {
           N=N/2;
        }
     else
     {
         N=N*3+1;
     }

   }

   fout<<S;

    return 0;
}