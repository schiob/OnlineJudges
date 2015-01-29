
# coding: utf-8

# In[5]:

n = int(raw_input())
for x in xrange(n):
    num = int(raw_input())
    numB = bin(num)
    if numB.find('0',2) > 0:
        print 'YES'
    else:
        print 'NO'

