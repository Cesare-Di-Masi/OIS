#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin ("input.txt");
    ofstream fout ("output.txt");
    long long T;
    fin>>T;
    long long l=1;
    long long r=2*sqrt(T)+1;
    while(l<=r){
        long long mid=(l+r)/2;
        long long val=mid*(mid+1)/2;
        if(val==T){
            fout<<mid;
            return 0;
        }
        else
        if(val>T){
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    fout<<r;
    return 0;
}