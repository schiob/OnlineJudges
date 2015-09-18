a, b, n = list(map(int, input().split()))
arr = [a, b]
for i in range(2,n):
    arr.append(arr[i-2] + (arr[i-1]**2))
print(arr[n-1])
