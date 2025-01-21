/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <assert.h>
#include <stdio.h>

// constraints
#define MAXN 1000000

// input data
int N, i;
int P[MAXN];
int G[MAXN];

int main() {
  //  uncomment the following lines if you want to read/write from files
  //  freopen("input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);

  assert(1 == scanf("%d", &N));
  for (i = 0; i < N; i++) assert(1 == scanf("%d", &P[i]));
  for (i = 0; i < N; i++) assert(1 == scanf("%d", &G[i]));

  // insert your code here

  printf("%lld\n", 42LL);  // print the result
  return 0;
}
