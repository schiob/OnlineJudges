
# coding: utf-8

# In[7]:

n = int(raw_input())
line = raw_input()

cont = 1
lprev = False
for l in line:
    if lprev:
        lprev = False
        continue
    if l == 'S':
        cont += 1
    else:
        cont += 1
        lprev = True
print n if cont>n else cont

