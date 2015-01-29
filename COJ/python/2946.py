
# coding: utf-8

# In[1]:

n = int(raw_input())
for x in xrange(n):
    num = int(raw_input())
    if num%2 != 0:
        print num*2
    else:
        while num%2 == 0:
            num /= 2
        print num

