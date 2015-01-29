
# coding: utf-8

# In[11]:

from itertools import chain, combinations
n = int(raw_input())

def powerset(iterable):
    "powerset([1,2,3]) --> () (1,) (2,) (3,) (1,2) (1,3) (2,3) (1,2,3)"
    s = list(iterable)
    return chain.from_iterable(combinations(s, r) for r in range(len(s)+1))
line = map(int, raw_input().split(' '))

line = list(powerset(line))
sums = [sum(x) for x in line]
cont = 0
for s in sums:
    if s%3 == 0:
        cont += 1
print cont -1

