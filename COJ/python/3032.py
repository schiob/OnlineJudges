from __future__ import division
import sys

for line in sys.stdin:
    t, a, b = map(int, line.split())
    print (t**a-1)/(t**b-1)
    print '({t}^{a}-1)/({t}^{b}-1)'.format(t=t, a=a, b=b)
