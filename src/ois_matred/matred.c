// NOTE: it is recommended to use this even if you don't understand the following code.

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXR 500000
#define MAXM 501
#define MAXN 501

int  M, N, R, i, j;
int  A[MAXN][MAXM];
int  V[MAXR], x1[MAXR], x2[MAXR], y1[MAXR], y2[MAXR];

int main() {
    // uncomment the two following lines if you want to read/write from files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d%d", &N, &M));

    for (j = 1; j <= N; ++j) {
        for (i = 1; i <= M; ++i)
            assert(1 == scanf("%d", &A[j][i]));
    }

    R = 0;


    // INSERT YOUR CODE HERE


    printf("YES\n");
    printf("%d\n", R);
    for (i = 0; i < R; ++i)
        printf("%d %d %d %d %d\n", x1[i], y1[i], x2[i], y2[i], V[i]);

    return 0;
}
