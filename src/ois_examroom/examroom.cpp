#include <bits/stdc++.h>
using namespace std;
int main()
{

   ifstream fin ("input.txt");
   ofstream fout ("output.txt");

    long Columns, Rows, K, PostiC, PostiR, PostiTot;
    // lettura di input >>
    //da dove leggo >> dove voglio memorizzare
    //scrittura di output <<
    //dove scrivo>>cosa voglio scrivere

    fin>>Rows;
    fin>>Columns;
    fin>>K;

    if(Columns%K==0)
        {
             PostiC=Columns/K;
        }
        else
        {
             PostiC=Columns/K+1;
        }

    if(Rows%K==0)
        {
             PostiR=Rows/K;
        }
        else
        {
             PostiR=Rows/K+1;
        }

    PostiTot=PostiC*PostiR;
    fout<<PostiTot;


    return 0;
}