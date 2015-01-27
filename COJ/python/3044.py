g = sum(map(int, raw_input().split()))
e = sum(map(int, raw_input().split()))
if g == e:
    print 'Tie'
elif g < e:
    print 'Emma'
else:
    print 'Gunnar'
