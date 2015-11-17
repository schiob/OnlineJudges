n = int(input())
for _ in range(n):
    a, k = list(map(int, input().split()))
    print('YES' if len(list(filter(lambda x: 
x<=0, map(int, input().split())))) < k else 
'NO' )
