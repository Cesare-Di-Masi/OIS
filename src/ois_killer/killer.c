// NOTE: it is recommended to use this even if you don't understand the following code.

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int K, N, T, test;

int main() {
    // uncomment the two following lines if you want to read/write from files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    assert(1 == scanf("%d", &T));
    for (test = 1; test <= T; ++test) {
        assert(2 == scanf("%d%d", &N, &K));

        int ans = 0;

        // INSERT YOUR CODE HERE

        if (ans == 1) {
            printf("%s\n", "YES");
        } else {
            printf("%s\n", "NO");
        }
    }

    return 0;
}
