
# coding: utf-8

# In[22]:

line = raw_input()
linen = line[1:]
linen += line[0]
test = [x for x in zip(line, linen) if x[0] == '0']
dead = filter(lambda x: x[1] == '0', test)
nDead = len(dead)
nLive = len(test) - nDead
if nDead > nLive and nLive != 0:
    print 'SHOOT'
elif nDead < nLive:
    print 'ROTATE'
else:
    print 'EQUAL'

