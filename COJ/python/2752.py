n = int(raw_input())
dic = {}
for x in range(n):
    lis = raw_input().split(" ")
    nom = lis[0]
    num = abs(int(lis[1]))

    if num in dic:
        dic.pop(num)
    else:
        dic[num] = nom
print("FOREVER ALONE ones:")
for x in reversed(dic.keys()):
    print(dic[x])
