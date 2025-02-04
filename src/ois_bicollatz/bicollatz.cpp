#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    long A,B,T=0;
    fin>>A;
    fin>>B;

    while(A!=1||B!=1)
        {
            if(A%2==0&&B%2==0)
            {
                A=A/2;
                B=B/2;
            }
            else
            {
                if(A%2==1&&B%2==1)
                {
                    A=A*3+1;
                    B=B*3+1;
                }
                else
                {
                    if(A%2==1)
                    {
                        A=A+3;
                    }
                    else
                    {
                        B=B+3;
                    }
                }
            }
            T++;

        }

        fout<<T;


    return 0;
}

