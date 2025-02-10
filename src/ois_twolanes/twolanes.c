// NOTE: it is recommended to use this even if you don't understand the following code.

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXS 100000

int  N, ans;
char L[MAXS], R[MAXS];

int main() {
    // uncomment the two following lines if you want to read/write from files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    assert(1 == scanf("%d", &N));

    assert(1 == scanf("%s", L));

    assert(1 == scanf("%s", R));

    ans = 0;


    // INSERT YOUR CODE HERE


    printf("%d\n", ans);

    return 0;
}
