n = int(raw_input())
for x in xrange(n):
    num = '0b'+raw_input()
    print 'YES' if int(num, 2)%3 == 0 else 'NO'
