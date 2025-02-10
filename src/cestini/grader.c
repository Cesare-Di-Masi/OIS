#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Declaring variables
static int N, M, Q;
static int i, a, b;
static char t;

// Declaring functions
void inizia(int N, int M);
void sposta(int a, int b);
int controlla(int a, int i);

int main() {
    // Uncomment the following lines if you want to read/write from files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    assert(3 == scanf("%d %d %d", &N, &M, &Q));

    inizia(N, M);

    for (i = 0; i < Q; i++) {
        assert(3 == scanf(" %c %d %d", &t, &a, &b));

        if (t == 's') {
            sposta(a, b);
        } else {
            printf("%d\n", controlla(a, b));
        }
    }

    return 0;
}
