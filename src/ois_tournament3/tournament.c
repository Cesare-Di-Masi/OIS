// NOTE: it is recommended to use this even if you don't understand the following code.

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXN 131072

int N, i, runnerup, winner;
int P[MAXN];

int main() {
    // uncomment the two following lines if you want to read/write from files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    assert(1 == scanf("%d", &N));

    for (i = 0; i < N; ++i)
        assert(1 == scanf("%d", &P[i]));

    winner = runnerup = 0;


    // INSERT YOUR CODE HERE


    printf("%d %d\n", winner, runnerup);

    return 0;
}
