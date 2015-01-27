n = int(raw_input())
for x in xrange(n):
    dir = {'B': 0,
           'R': 0,
           'O': 0,
           'K': 0,
           'E': 0,
           'N': 0}

    s = raw_input()
    if s.islower():
        print('No Secure')
        continue

    for c in s:
        if c in dir:
            dir[c] = dir[c] + 1

    if len(set(dir.values())) == 1:
        print('No Secure')
    else:
        print('Secure')
