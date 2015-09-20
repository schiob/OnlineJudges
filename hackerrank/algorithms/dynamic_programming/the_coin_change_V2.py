"""Diferent ways to give change Bottom-up

The idea here is to start in the most simple case with 0 amount,
there is one way to give the change (give nothing) then go with
the first coin and the next amount (1), give one coin and the 
subproblem takes place in the previous subproblems already solved.

"""

n, m = [int(i) for i in input().split()]
coins = [int(i) for i in input().split()]

val = [1] + [0]*n

for i in range(m):
    for j in range(coins[i], n+1):
        val[j] += val[j-coins[i]]
print(val[n])