#include <bits/stdc++.h>

using namespace std;

int main()
{

   ifstream cin("input.txt");
   ofstream cout("output.txt");

   int N,M,A,B;
   cin>>N>>M>>A>>B;

   int totPrice=0,LeftTickets=N;

    if(N==1)
    {
        if(A<B)
        {
            cout<<A;
        }else
        {
            cout<<B;
        }

        return 0;

    }



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
    return 0;
}