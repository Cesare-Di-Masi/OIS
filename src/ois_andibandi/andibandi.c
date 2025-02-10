// NOTE: it is recommended to use this even if you don't understand the following code.

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int D, Sa, Sb, Ta, Tb, Ua, Ub;

int main() {
    // uncomment the two following lines if you want to read/write from files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    assert(3 == scanf("%d%d%d", &Sa, &Ta, &Ua));

    assert(3 == scanf("%d%d%d", &Sb, &Tb, &Ub));

    D = 0;


    // INSERT YOUR CODE HERE


    printf("%d\n", D);

    return 0;
}
