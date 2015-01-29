
# coding: utf-8

# In[4]:

while True:
    try:
        n = int(raw_input())
        lista = [1]
        for x in xrange(1, n):
            lista.append(lista[-1]+x)
        l = ' '.join(map(str, reversed(lista)))
        print l
    except:
        break

