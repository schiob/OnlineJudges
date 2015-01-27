def inv(string):
    return string[:len(string) // 2] + 'R' + string[(len(string) // 2) + 1:]

def drag(n):
    if n in dic:
        return dic[n]
    else:
        dic[n] = drag(n-1)+'L'+inv(drag(n-1))
        return dic[n]

dic = {0: '',
       1: 'L'}

n = int(raw_input())
while(n != -1):
    if n not in dic:
        dic[n] = drag(n)
        print dic[n]
    else:
        print dic[n]
    n = int(raw_input())
