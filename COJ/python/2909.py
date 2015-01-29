
# coding: utf-8

# In[ ]:

#l = range(1, 1000001)
lista = [0] * 1000001
#count = 0

#for x in xrange(1, 1000001):
#    for num in l[:x]:
#        if x%num == 0:
#            count += 1
#    lista[x] = count
#    count = 0

for y in xrange(1, 1000001):
    for i, x in enumerate(lista[y-1::y]):
        lista[(y-1)+(y*i)] += 1

print lista
for line in xrange(int(raw_input())):
    print lista.index(max(lista[:int(raw_input())+1]))


# In[ ]:



