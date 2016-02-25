from heapq import heappush
from heapq import heappop

def find(d_sets, i):
    if d_sets[i] != i:
        d_sets[i] = find(d_sets, d_sets[i])
    return d_sets[i]

def union(d_sets, x, y):
    d_sets[find(d_sets, y)] = find(d_sets, x)
    
def same_set(d_sets, x, y):
    return find(d_sets, y) == find(d_sets, x)

N, E = map(int, input().split())
parents = [i for i in range(N+1)]
edges = []
for _ in range(E):
    x, y, z = map(int, input().split())
    heappush(edges, (z,(x, y)))

e = heappop(edges)
union(parents, e[1][0], e[1][1])
total_sum = e[0]

while edges:
    e = heappop(edges)
    if not same_set(parents, e[1][0], e[1][1]):
        total_sum += e[0]
        union(parents, e[1][0], e[1][1])
print(total_sum)
