a,b,c = map(int, raw_input().split())
t = [map(int, raw_input().split()) for _ in xrange(3)]
l = range(t[0][0],t[0][1])
l += range(t[1][0],t[1][1])
l += range(t[2][0],t[2][1])
coun = [0]*100
for x in l:
    coun[x] += 1
print coun.count(1)*a + coun.count(2)*b*2 + coun.count(3)*c*3
