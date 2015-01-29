
# coding: utf-8

# In[1]:

while True:
    a = raw_input().split(' ')
    b = float(a[1])
    a = float(a[0])
    if a > 0 and b > 0:
        print 'Q1'
    elif a > 0 and b < 0:
        print 'Q4'
    elif a < 0 and b > 0:
        print 'Q2'
    elif a < 0 and b < 0:
        print 'Q3'
    elif a == 0 and b == 0:
        print 'AXIS'
        break
    else:
        print 'AXIS'

