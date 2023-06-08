def cost(m, s, first, memo, num_final):
    if memo[m][s] != -2:
        return memo[m][s]
    
    if m == 1:
        if s <= 9:
            memo[m][s] = s
            num_final[m-1] = s
            # print("tamaño", m, "digito", s)
            return s
        else:
            memo[m][s] = -1
            return -1
    
    start = 1 if first else 0
    for d in range(start, 10):
        sub_sum = cost(m-1, s-d, False, memo, num_final)
        if sub_sum == -1:
            continue
        if d + sub_sum == s:
            memo[m][s] = s
            num_final[m-1] = d
            # print("tamaño", m, "digito", d)
            return s
    memo[m][s] = -1
    return -1

m = 100
s = 3

memo = []
for _ in range(m+1):
    memo.append([-2] * (s+1))

num_final = [-1] * m 

print(cost(m, s, True, memo, num_final))

print(num_final)