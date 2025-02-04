#include <bits/stdc++.h>
using namespace std;

int main()
{

   
    int N1,N2,Counter=0;
    
    cin>>N1>>N2;

    vector<int> N;

    for(int i=0; i<N1; i++)
    {

        int a;
        cin>>a;
        N.push_back(a);

    }


    sort(N.begin(), N.end());

    for(int i=0; i<N2; i++)
    {
        int R=N1,L=0,Mid;
        int j;
        cin>>j;

        while(L<R)
        {

            Mid = (L+R)/2;
            if(j<N[Mid])
            {
                R=Mid;
            }else if(j>N[Mid])
            {
                L = Mid+1;
            }else{
                Counter++;
                break;
            }


        }


    }

    cout<<Counter;
   

}

