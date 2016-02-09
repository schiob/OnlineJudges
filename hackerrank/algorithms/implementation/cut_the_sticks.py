#!/bin/python3

import sys


n = int(input().strip())
arr = [int(arr_temp)  for arr_temp in 
input().strip().split(' ')]
d = dict()
for i in arr:
    if i in d:
        d[i] += 1
    else:
        d[i] = 1
for i in sorted(d.keys()):
    print(n)
    n -= d[i]
