n = int(input())
for _ in range(n):
    s = input()
    flag = False
    flag2 = False
    for a, b in zip(enumerate(s), 
enumerate(reversed(s))):
        if flag2:
            if a[1] == op2:
                print(a[0]-2)
            else:
                print(len(s)-1-(b[0]-2))
            break
        if flag:
            if a[1] == op2:
                if b[1] == op1:
                    op1 = a[1]
                    op2 = b[1]
                    flag2 = True
                    continue
                else:
                    print(a[0]-1)
            else:
                print(len(s)-1-(b[0]-1))
            break
        if a[1] != b[1]:
            op1 = a[1]
            op2 = b[1]
            flag = True
    else:
        print(-1)
