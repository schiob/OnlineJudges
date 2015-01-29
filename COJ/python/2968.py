
# coding: utf-8

# In[3]:

from itertools import permutations
def calc(nums):
    nums.sort()
    for per in permutations(nums, 6):
        
        if (per[0] == per[1]+per[2]+per[3]+per[4]+per[5] or
            per[0]+per[1] == per[2]+per[3]+per[4]+per[5] or
            per[0]+per[1]+per[2] == per[3]+per[4]+per[5] or
            per[0]+per[1]+per[2]+per[3] == per[4]+per[5] or
            per[0]+per[1]+per[2]+per[3]+per[4] == per[5]):
            return 'Tobby puede cruzar'
    return 'Tobby no puede cruzar'
        
for x in xrange(int(raw_input())):
    nums = map(int, raw_input().split(' '))
    print calc(nums)
            

