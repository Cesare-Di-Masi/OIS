/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 * NOTE: it is recommended to use this even if you don't
 * understand the following code.
 */

#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 5000

// input data
int N, X, i;
int P[MAXN], Q[MAXN];

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d %d", &N, &X));
    for(i=0; i<N; i++)
        assert(2 == scanf("%d %d", &P[i], &Q[i]));

    // insert your code here

    printf("%d\n", 42); // print the result
    return 0;
}
