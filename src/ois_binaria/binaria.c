// NOTE: it is recommended to use this even if you don't understand the following code.

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXN 100000

int B, N, i;
int T[MAXN];

int main() {
    // uncomment the two following lines if you want to read/write from files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    assert(1 == scanf("%d", &N));

    for (i = 0; i < N; ++i)
        assert(1 == scanf("%d", &T[i]));

    B = 0;


    // INSERT YOUR CODE HERE


    printf("%d\n", B);

    return 0;
}
