// NOTE: it is recommended to use this even if you don't understand the following code.

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXN 100000

int M, N, i, maxChocolates;
int C[MAXN], P[MAXN];

int main() {
    // uncomment the two following lines if you want to read/write from files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d%d", &N, &M));

    for (i = 0; i < N; ++i)
        assert(1 == scanf("%d", &C[i]));

    for (i = 0; i < N; ++i)
        assert(1 == scanf("%d", &P[i]));

    maxChocolates = 0;


    // INSERT YOUR CODE HERE


    printf("%d\n", maxChocolates);

    return 0;
}
