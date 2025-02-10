#!/usr/bin/env python3
# NOTE: it is recommended to use this even if you don't understand the following code.

import sys

# uncomment the two following lines if you want to read/write from files
# sys.stdin = open('input.txt')
# sys.stdout = open('output.txt', 'w')

N, M = map(int, input().strip().split())

A = [[0 for j in range(M + 1)] for i in range(N + 1)]
for j in range(N):
    A[j] = [0] + list(map(int, input().strip().split()))

R = 0
x1 = [0 for i in range(2*N*M)]
y1 = [0 for i in range(2*N*M)]
x2 = [0 for i in range(2*N*M)]
y2 = [0 for i in range(2*N*M)]
V = [0 for i in range(2*N*M)]


# INSERT YOUR CODE HERE


print("YES")
print(R)
for i in range(R):
    print(x1[i], y1[i], x2[i], y2[i], V[i])

sys.stdout.close()
