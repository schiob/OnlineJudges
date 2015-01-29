
# coding: utf-8

# In[19]:

ope1 = raw_input()
op = raw_input()
ope2 = raw_input()

if op == '/' and len(ope1) < len(ope2):
    print format(eval(ope1+op+ope2+'.0'), '.{}f'.format(len(ope2)-len(ope1)))
else:
    print eval(ope1+op+ope2)

