n = int(input())
for _ in range(n):
    s1 = set(input())
    s2 = set(input())
    if(len(s1.intersection(s2))):
        print('YES')
    else:
        print('NO')
