#include <bits/stdc++.h>

#define MAXN 5000
#define MAXK 5000
#define MAXP 1000000

using namespace std;

vector<int> memo(1000002,-1);

int solve(int N,int K, int pos,int food, int P[])
{
    if(pos>N)
    return 0;
    if(food>=K)
    return food;
    if(memo[pos] >= 0) return memo[pos];

    int eat=0,notEat=0,res=0;

    eat = solve(N,K,pos+1,food+P[pos],P);
    notEat = solve(N,K,pos+1,food,P);

    if(eat == 0)
    eat = 2e9;
    if(notEat == 0)
    notEat = 2e9;

    res = min(eat,notEat);

    return memo[pos] = res;

}


int mangia(int N, int K, int P[]) {
    return solve(N,K,0,0,P);
}


int P[MAXN];

int main() {
    FILE *fr, *fw;
    int N, K, i;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
    assert(2 == fscanf(fr, "%d %d", &N, &K));
    for(i=0; i<N; i++)
        assert(1 == fscanf(fr, "%d", &P[i]));

    fprintf(fw, "%d\n", mangia(N, K, P));
    fclose(fr);
    fclose(fw);
    return 0;
}
