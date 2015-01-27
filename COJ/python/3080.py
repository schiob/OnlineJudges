from __future__ import division
n = int(raw_input())
for _ in xrange(n):
    try:
        res = eval(raw_input()+raw_input()+raw_input())
    except:
        print('No')
        continue
    raw_input()
    if float(raw_input()) == res:
        print('Yes')
    else:
        print('No')
