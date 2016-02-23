from collections import defaultdict
s1 = input()
s2 = input()
d = defaultdict(int)
count = 0
for let in s1:
    d[let] += 1
for let in s2:
    d[let] -= 1
for k in d:
    count += abs(d[k])
print(count)
