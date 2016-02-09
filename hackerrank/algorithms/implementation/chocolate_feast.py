#!/bin/python3

import sys


t = int(input().strip())
for a0 in range(t):
    n,c,m = input().strip().split(' ')
    n,c,m = [int(n),int(c),int(m)]
    tot = n//c
    new_c = tot//m
    wra = tot%m + new_c
    tot += new_c
    while wra >= m:
        new_c = wra//m
        wra = wra%m + new_c
        tot += new_c
    print(tot)
