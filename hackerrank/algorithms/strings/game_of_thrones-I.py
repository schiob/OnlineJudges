s = input()
d = dict()
for let in s:
    if let in d:
        d[let] += 1
    else:
        d[let] = 1
inp = 0
if len(s)%2 == 1:
    for k in d:
        if d[k]%2 ==1:
            inp +=1
            if inp > 1:
                print('NO')
                break
    else:
        print('YES')
else:
    for k in d:
        if d[k]%2 ==1:
            print('NO')
            break
    else:
        print('YES')

