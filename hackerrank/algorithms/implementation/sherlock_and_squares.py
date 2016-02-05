from math import ceil
from math import sqrt
t = int(input())

for _ in range(t):
    x, y = list(map(int, input().split()))
    bot_root = ceil(sqrt(x))
    count = 0
    while bot_root**2 <= y:
        count += 1
        bot_root += 1
    print(count)
