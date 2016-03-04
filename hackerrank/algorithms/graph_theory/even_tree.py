from collections import defaultdict

def count_sons(start_n, visit, edg):
    global nodes_under
    visit[start_n] = 1
    for son in edg[start_n]:
        if visit[son] == 0:
            visit[son] = 1
            count_sons(son, visit, edg)
            nodes_under[start_n] += 
nodes_under[son] +1
            visit[son] = 0
    return

def count_cuts(start_n, visit, edg):
    global nodes_under
    global edges_cut
    visit[start_n] = 1
    for son in edg[start_n]:
        if visit[son] == 0:
            visit[son] = 1
            #print('parent: {} son: {} 
nodes_under_son: {} eval {}'.format(start_n, 
son, nodes_under[son], (nodes_under[son] + 1) % 
2))
            if (nodes_under[son]+1) % 2 == 0:
                edges_cut += 1
                #print('plus1')
            count_cuts(son, visit, edg)
            visit[son] = 0
    return

V, E = map(int, input().split())
edges = defaultdict(list)
for _ in range(E):
    k, v = map(int, input().split())
    edges[k].append(v)
    edges[v].append(k)

nodes_under = [0]*(V+1)
nodes_visited = [0]*(V+1)
count_sons(1, nodes_visited, edges)
nodes_visited = [0]*(V+1)
edges_cut = 0
count_cuts(1, nodes_visited, edges)
print(edges_cut)
