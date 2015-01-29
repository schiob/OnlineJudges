
# coding: utf-8

# In[1]:

import re
word = raw_input()
cont = 0
while True:
    try:
        line = raw_input()
        cont += len(re.findall(word, line))
    except EOFError:
        print cont
        break


# In[ ]:



