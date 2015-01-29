
# coding: utf-8

# In[2]:

n = int(raw_input())
for x in xrange(n):
    cont = 0
    a, b = map(int, raw_input().split(' '))
    while a != b:
        if a > b:
            a /= 2
            cont += 1
        elif a < b:
            a += 1
            cont += 1
    print cont

