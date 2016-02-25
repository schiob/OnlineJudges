from collections import defaultdict
from heapq import heappush
from heapq import heappop

MAX = 1000000

T = int(input())

for _ in range(T):
    N, E = map(int, input().split())
    
    # adjacent list
    adj_l = defaultdict(list)
    for i in range(E):
        x, y, z = map(int, input().split())
        adj_l[x].append((y, z))
        adj_l[y].append((x, z))
    dist_l = [MAX]*(N+1)
    
    s = int(input())
    h = []
    heappush(h, (0, s))
    dist_l[s] = 0
    visit = set()
    
    while h:
        u = heappop(h)
        if u[1] in visit:
            continue
        visit.add(u[1])
        for v, w in adj_l[u[1]]:
            if v not in visit:
                if dist_l[v] > dist_l[u[1]] + 
w:
                    dist_l[v] = dist_l[u[1]] + 
w
                heappush(h, (dist_l[v], v))

    dist_l = map(str, dist_l)
    dist_l = [w.replace(str(MAX), '-1') for w 
in dist_l]
    for x in dist_l[1:-1]:
        if x != '0':
            print(x, end=' ')
    print(dist_l[-1])
