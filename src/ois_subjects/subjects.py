#!/usr/bin/env python3
# NOTE: it is recommended to use this even if you don't understand the following code.

import sys

# uncomment the two following lines if you want to read/write from files
# sys.stdin = open('input.txt')
# sys.stdout = open('output.txt', 'w')

N, M = map(int, input().strip().split())

K = [0 for i in range(N)]
S = [[] for i in range(N)]
for j in range(N):
    S[j] = list(map(int, input().strip().split()))
    K[j], S[j] = S[j][0], S[j][1:]

P = 0
ans = [[0 for j in range(2)] for i in range(1000000)]


# INSERT YOUR CODE HERE


print(P)
for j in range(P):
    for i in range(2):
        print(ans[j][i], end=' ')
    print()

sys.stdout.close()
