#!/usr/bin/env python3
# NOTE: it is recommended to use this even if you don't understand the following code.

import sys

# uncomment the two following lines if you want to read/write from files
# sys.stdin = open('input.txt')
# sys.stdout = open('output.txt', 'w')

T = int(input().strip())
for test in range(1, T+1):
    N, K = map(int, input().strip().split())

    ans = False


    # INSERT YOUR CODE HERE


    if ans == True:
        print("YES")
    else:
        print("NO")

sys.stdout.close()
