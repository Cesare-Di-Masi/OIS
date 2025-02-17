// NOTE: it is recommended to use this even if you don't understand the following code.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// constraints
#define MAXN 1000

// input data
int K, N, R, T, i, j;
int S[MAXN];

int main() {
	// uncomment the following lines if you want to read/write from files
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

    assert(1 == scanf("%d", &K));
    for(j=0; j<K; j++) {
        assert(3 == scanf("%d %d %d", &N, &R, &T));
        for(i=0; i<N; i++)
            assert(1 == scanf("%d", &S[i]));

        // insert your code here

        printf("Innocent\n"); // print the result
    }
    return 0;
}
