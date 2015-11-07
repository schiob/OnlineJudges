n = int(input())
l_sets = list()

for x in range(n):
    s = input()
    l_sets.append(set(s))
    
if n > 1:
    
print(len(l_sets[0].intersection(*l_sets[1:])))
else:
    print(len(l_sets[0]))
