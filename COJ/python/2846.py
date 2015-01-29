
# coding: utf-8

# In[2]:

n = int(raw_input())
for x in xrange(n):
    line = raw_input()
    num1 = sum([int(l) for l in line])
    num2 = int(line[-3:])*10
    num = num1+num2
    if num > 9999:
        print str(num)[-4:]
        continue
    elif num < 1000:
        print num+1000
        continue
    print num

