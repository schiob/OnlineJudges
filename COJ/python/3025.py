n = int(raw_input())
line = map(int, raw_input().split())
sum = 0
for i in range(n):
    line[i] = (line[i]*(i+1)) - sum
    sum += line[i]

print ' '.join(map(str, line))

