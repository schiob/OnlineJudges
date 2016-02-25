from collections import defaultdict
from heapq import heappush
from heapq import heappop

MAX = 1000000
N, E = map(int, input().split())
adj_l = defaultdict(list)
for _ in range(E):
    x, y, z = map(int, input().split())
    adj_l[x].append((y, z))
    adj_l[y].append((x, z))
met_set = set()
weights = [MAX] * (N+1)

s = int(input())
h = []
weights[s] = 0
heappush(h, (0, s))

while h:
    u = heappop(h)
    if u[1] in met_set:
        continue
    met_set.add(u[1])
    for v, w in adj_l[u[1]]:
        if w < weights[v] and v not in met_set:
            weights[v] = w
        heappush(h, (w, v))

print(sum(weights[1:]))
