#include <bits/stdc++.h>

using namespace std;

int main()
{

   ifstream cin("input.txt");
   ofstream cout("output.txt");

   long long N,M,A,B;
   cin>>N>>M>>A>>B;

   long long totPrice=0,LeftTickets=N;

    while(LeftTickets>0)
    {
        if(LeftTickets*A>B)
        {
            totPrice+=B;
            LeftTickets-=M;
        }else
        {
            totPrice+=LeftTickets*A;
            LeftTickets=0;
        }
    }

    cout<<totPrice;
}