#include <bits/stdc++.h>

using namespace std;

int a;
int n;
vector<int> v;

int solve(int pos, bool skipped)
{
    if(pos>=n) return 0;
    int res = solve(pos+1,false) + v[pos];

    if(skipped == false)
    {
        res = min(res, solve(pos+1,true));
    }

    return res;
}

int main()
{

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    cin>>n;
    v.resize(n);
    for(int &a: v) cin>>a;
    cout<< solve(0,false) << '\n';

}