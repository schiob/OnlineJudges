
# coding: utf-8

# In[3]:

from itertools import cycle

line = raw_input()
while line !='0':
    line = line.split(' ')
    n = int(line[0])
    line = sorted([x for x in line[1:] if x!='0'])
    res = ['', '']
    li = cycle([0,1])
    res[li.next()] += line.pop(0)
    res[li.next()] += line.pop(0)

    for x in xrange(n-len(line)-2):
        res[li.next()] += '0'
    for x in line:
        res[li.next()] += x
        
    print eval(res[0]+'+'+res[1])
    line = raw_input()
    
"""
9 1 1 1 0 0 0 0 0 9
2 9 8
2 0 0
2 1 0
10 0 1 2 3 4 5 6 7 8 9
14 0 1 2 3 4 5 6 7 8 9 0 1 2 3
14 5 5 5 5 5 6 6 6 6 6 9 9 9 9
14 1 0 0 0 0 0 0 0 0 0 0 0 7 0
5 4 4 4 4 4
5 4 4 5 7 6
8 9 8 7 3 4 1 1 0
9 9 1 1 1 1 0 0 0 7
3 1 0 3
4 2 2 0 1
0
"""

