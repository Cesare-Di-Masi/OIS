#include <bits/stdc++.h>

using namespace std;


int main()
{

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long A,B,H,res=0,counter,other; cin>>B>>H>>A;

    long long cos;

    counter = min(B,H);
    other = max(B,H);

    for(int i=counter; i<=sqrt(A); i++)
    {
        if(A%i==0)
        {
            cos=A/i;

            if(cos>=other)
            {
                res++;
            }

            if(i>=other && cos>=counter && i!=cos)
            {
                res++;
            }


        }


    }

    cout<<res;

}