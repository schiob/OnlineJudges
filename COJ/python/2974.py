
# coding: utf-8

# In[ ]:

from itertools import izip_longest

ALPHA = ''
def comper(B, A):
    for pair in izip_longest(A, B, fillvalue='-'):
        if pair[0] == '-':
            return 1
        elif pair[1] == '-':
            return -1
        elif ALPHA.index(pair[0]) < ALPHA.index(pair[1]):
            return 1
        elif ALPHA.index(pair[0]) > ALPHA.index(pair[1]):
            return -1
    return 0

line = raw_input()
count = 1
while line != '0':
    n, ALPHA = line.split(' ')
    lista = list()
    for x in xrange(int(n)):
        lista.append(raw_input())
    
    print 'year {}'.format(count)
    count += 1
    for pal in sorted(lista, cmp=comper):
        print pal
    line = raw_input()
        
"""
10 HABCDEFGIJKLMNOPQRSTUVWXYZ
HEY
HELLO
HEYA
HAHA
HAHO
ALOHA
ALONDRA
ALONSO
ALONE
ALURIA
"""

