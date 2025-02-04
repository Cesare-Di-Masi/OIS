#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

   int MAXN=30;
   int distanza,potenza;

   fin>>distanza;

   int salti=0;
   for(int i=MAXN; i>=0; i--)
   {
       potenza=pow(2,i);
       if(potenza<=distanza)
       {
           distanza=distanza-potenza;
           salti++;
       }

   }
fout<< salti;
return 0;

}

