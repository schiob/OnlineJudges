def check(i):
    if i > 0 and i < n-1:
        if cal[i] <= cal[i-1] and cal[i] <= cal[i+1]:
            return can[i]
        if cal[i-1] < cal[i]:
            can[i] = check(i-1)+1
        if cal[i] > cal[i+1]:
            can[i] = max(can[i], check(i+1)+1)
        return can[i]
    elif i == 0:
        if cal[i] > cal[i+1]:
            can[i] = max(can[i], check(i+1)+1)
        return can[i]
        
    elif i == n-1:
        if cal[i-1] < cal[i]:
            can[i] = check(i-1)+1
        return can[i]
    return can[i]
    
n = int(input())
cal = [int(input()) for _ in range(n)]
can = [1] * n
for i in range(n):
    check(i)
    
print(sum(can))