
# coding: utf-8

# In[1]:

d, k = map(int, raw_input().split(' '))
while d != 0:
    if d == 1:
        dif = [1,3,5,7,9,11,13,15,17]
        if k%9 == 0:
            val = (sum(dif)*(k/9))
        else:
            val = (sum(dif)*(k/9)) + (sum(dif[:k%9]))
        print val
        
    elif d == 2:
        dif = [4,12,11,10,9,8,7,6,14]
        if k%9 == 0:
            val = (sum(dif)*(k/9))
        else:
            val = (sum(dif)*(k/9)) + (sum(dif[:k%9]))
        print val
    
    elif d == 4:
        dif = [7,12,8,13,9,5,10,6,11]
        if k%9 == 0:
            val = (sum(dif)*(k/9))
        else:
            val = (sum(dif)*(k/9)) + (sum(dif[:k%9]))
        print val
    
    elif d == 5:
        dif = [7,3,8,13,9,5,10,15,11]
        if k%9 == 0:
            val = (sum(dif)*(k/9))
        else:
            val = (sum(dif)*(k/9)) + (sum(dif[:k%9]))
        print val
    
    elif d == 7:
        dif = [13,12,2,10,9,8,7,15,5]
        if k%9 == 0:
            val = (sum(dif)*(k/9))
        else:
            val = (sum(dif)*(k/9)) + (sum(dif[:k%9]))
        print val

    elif d == 8:
        dif = [10,12,14,16,-9,11,13,6,8]
        if k%9 == 0:
            val = (sum(dif)*(k/9))
        else:
            val = (sum(dif)*(k/9)) + (sum(dif[:k%9]))
        print val
    
    elif d == 9 or d == 3 or d == 6:
        dif = [9,9,9,9,9,9,9,9,9]
        if k%9 == 0:
            val = (sum(dif)*(k/9))
        else:
            val = (sum(dif)*(k/9)) + (sum(dif[:k%9]))
        print val
    
    d, k = map(int, raw_input().split(' '))


# In[48]:

"""d, k = map(int, raw_input().split(' '))
while d != 0:
    num = '{}'.format(d)*k
    print sum(map(int,str(int(num)**2)))
    d, k = map(int, raw_input().split(' '))

def fun(d, k):
    lista = list()
    for x in xrange(1, k+1):
        num = '{}'.format(d)*x
        lista.append(sum(map(int,str(int(num)**2))))
    for n, ne in zip(lista[1:], lista[:-1]):
        print n-ne
 """       
    

