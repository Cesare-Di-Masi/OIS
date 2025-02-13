// NOTE: it is recommended to use this even if you don't understand the following code.

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXP 1000000
#define MAXN 100000

int M, N, P, i, j;
int K[MAXN];
int S[MAXN][5];
int ans[MAXP][2];

int main() {
    // uncomment the two following lines if you want to read/write from files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d%d", &N, &M));

    for (j = 0; j < N; ++j) {
        assert(1 == scanf("%d", &K[j]));
        for (i = 0; i < K[j]; ++i)
            assert(1 == scanf("%d", &S[j][i]));
    }

    P = 0;


    // INSERT YOUR CODE HERE


    printf("%d\n", P);
    for (j = 0; j < P; ++j) {
        for (i = 0; i < 2; ++i)
            printf("%d ", ans[j][i]);
        printf("\n");
    }

    return 0;
}
