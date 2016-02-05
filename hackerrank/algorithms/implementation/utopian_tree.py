#!/bin/python3

import sys


t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    alt = 1
    for x in range(n):
        if x%2 == 0:
            alt *= 2
        else:
            alt += 1
    print(alt)
