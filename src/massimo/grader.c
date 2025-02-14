#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAXN 1000

// Declaring variables
static int N;
static int V[MAXN];

// Declaring functions
int trova_massimo(int N, int V[]);

int main() {
    // Uncomment the following lines if you want to read/write from files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    assert(1 == scanf("%d", &N));

    for(int i = 0; i < N; i++) {
        assert(1 == scanf("%d", &V[i]));
    }

    printf("%d\n", trova_massimo(N, V));

    return 0;
}
