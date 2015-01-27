n, d = map(int, raw_input().split())
while(n != 0 and d != 0):
    print n/d, n%d, '/', d
    n, d = map(int, raw_input().split())
