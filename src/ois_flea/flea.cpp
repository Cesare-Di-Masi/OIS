#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    string s;

    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    fin>>n;
    fin>>s;

    int finalPosition=0;

    for(char c : s)
    {
        if(c=='R')
        {
            finalPosition -= 1;
        }
        else{
            finalPosition +=1;
        }
    }

    int res = abs(finalPosition);
    fout<<res;

}