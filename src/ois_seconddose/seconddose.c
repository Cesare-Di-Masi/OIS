#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 100000

// input data
int N1, N2, i;
int ID1[MAXN], ID2[MAXN];

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d %d", &N1, &N2));
    for(i=0; i<N1; i++)
        assert(1 == scanf("%d", &ID1[i]));
    for(i=0; i<N2; i++)
        assert(1 == scanf("%d", &ID2[i]));

    // insert your code here
    
    printf("%d\n", 42); // print the result
    return 0;
}
