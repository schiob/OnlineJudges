from collections import Counter
n = int(input())
for _ in range(n):
    line = input()
    if(len(line)%2 != 0):
        print(-1)
    else:
        mid = len(line)//2
        cnt = Counter()
        for l in line[:mid]:
            cnt[l] += 1
        for l in line[mid:]:
            if l in cnt and cnt[l] > 0:
                cnt[l] -= 1
        print(sum(cnt.values()))
