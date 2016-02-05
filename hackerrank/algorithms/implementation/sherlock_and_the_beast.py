#!/bin/python3

import sys


t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    z = n
    while z%3 != 0 and z >= 0:
        z -= 5
    if z < 0:
        print(-1)
    else:
        print('{}{}'.format('5'*z, '3'*(n-z)))
