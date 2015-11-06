n = int(input())
for x in range(n):
    s = input()
    cont = 0
    for x, y in zip(s, s[1:]):
        if x == y:
            cont += 1
    print(cont)
