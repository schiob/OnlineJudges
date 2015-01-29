
# coding: utf-8

# In[2]:

from bisect import bisect_right

def make_sum(lista):
    suma = list()
    aux = 0
    for tank in lista[1:]:
        aux += tank
        suma.append(aux)
    return suma
    
    
    
while True:
    try:
        n,q = raw_input().split(' ')
        nums = list()

        tanks = map(int, raw_input().split(' '))
        sum_tanks = make_sum(tanks)
        querys = map(int, raw_input().split(' '))
        if len(tanks) != 1:
            for query in querys:
                nums.append(bisect_right(sum_tanks, query-1)+1)
        elif len(tanks) == 1:
            for x in xrange(len(querys)):
                nums.append(1)
        print ' '.join(map(str,nums))
    except:
        break
    

