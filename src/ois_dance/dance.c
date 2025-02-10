// NOTE: it is recommended to use this even if you don't understand the following code.

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXN 10000
#define MAXS 128

int  D, N, i;
int  A[MAXN], B[MAXN];
char K[MAXS];

int main() {
    // uncomment the two following lines if you want to read/write from files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    assert(1 == scanf("%d", &N));

    assert(1 == scanf("%d", &D));

    for (i = 0; i < N; ++i)
        assert(1 == scanf("%d", &A[i]));

    for (i = 0; i < N; ++i)
        assert(1 == scanf("%d", &B[i]));

    K[0] = 0;


    // INSERT YOUR CODE HERE


    printf("%s\n", K);

    return 0;
}
