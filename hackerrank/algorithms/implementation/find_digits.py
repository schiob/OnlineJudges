#!/bin/python3

import sys


t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    d = dict()
    d['0'] = False
    cont = 0
    for dig in str(n):
        if dig in d:
            cont += 1 if d[dig] else 0
        else:
            if n% int(dig) == 0:
                d[dig] = True
                cont += 1
            else:
                d[dig] = False
    print(cont)
