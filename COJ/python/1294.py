import sys

def two_items(iterable):
    iterator = iter(iterable)
    item = iterator.next()
    for next in iterator:
        yield (item, next)
        item = next


for line in sys.stdin:
    n = map(int, line.split())
    n, lis = n[0], n[1:]
    if n == 1:
        print 'Jolly'
        continue
    comp = [i for i in xrange(1, n)]
    for act, nex in two_items(lis):
        if act < 1 or nex < 1:
            print 'Not jolly'
            break
        dif = abs(act-nex)
        if dif in comp:
            comp.remove(dif)
    else:
        if len(comp) == 0:
            print 'Jolly'
        else:
            print 'Not jolly'
