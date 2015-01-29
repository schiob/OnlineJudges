
# coding: utf-8

# In[2]:

line = raw_input()
while line != '0':
    n, p = map(int, line.split(' '))
    res = list()
    if p <= n/2:
        if p%2 != 0:
            nex = p+(abs(((p+1)/2)-(n/4)) * 4)+2
            res = [p+1, nex, nex+1]
        else:
            nex = p+(abs((p/2)-(n/4)) * 4)+1
            res = [p-1, nex, nex+1]
    else:
        if p%2 != 0:
            nex = p-(abs(((p+1)/2)-(n/4)-1) * 4)-2
            res = [nex, nex+1, p+1]
        else:
            nex = p-(abs(((p)/2)-(n/4)-1) * 4)-3
            res = [nex, nex+1, p-1]
    print '{} {} {}'.format(res[0], res[1], res[2])
    line = raw_input()

