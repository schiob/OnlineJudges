from collections import defaultdict
from collections import deque

t = int(input())
for _ in range(t):
    v, e = [int(x) for x in input().split()]
    adj = defaultdict(list)
    dist = [-1] * v
    visi = [0] * v
    for v1, v2 in (map(int, input().split()) for x in range(e)):
        adj[v1].append(v2)
        adj[v2].append(v1)
    s = int(input())
    
    dist[s-1] = 0
    visi[s-1] = 1
    
    deq = deque()
    deq.append(s)
    while len(deq) != 0:
        node = deq.popleft()
        for ver in adj[node]:
            if not visi[ver-1]:
                visi[ver-1] = 1
                dist[ver-1] = dist[node-1] + 6
                deq.append(ver)
    
    print(*(dist[:s-1] + dist[s:]))