
# coding: utf-8

# In[3]:

tests = int(raw_input())
for x in xrange(tests):
    res = 0
    t, p = raw_input().split(' ')
    while p in t:
        res += 1
        t = t.replace(p, "", 1)
    print res

