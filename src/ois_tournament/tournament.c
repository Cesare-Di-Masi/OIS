// NOTE: it is recommended to use this even if you don't understand the following code.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAXN 1000100

// input data
int N, i, res;
int S[MAXN];

int main(){
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

	assert(1 == scanf("%d", &N));
	for(int i = 0; i < N; i++) {
		assert(1 == scanf("%d", &S[i]));
	}


    // insert your code here
	res = 42;


    // print the result
	printf("%d\n", res);

	return 0;
}
