c, n = map(int, raw_input().split())
def check():
    n_in_train = 0
    o, i, w = map(int, raw_input().split())
    n_in_train += i
    if o < 0:
        return 'impossible'
    elif n_in_train > c:
        return 'impossible'
    elif 0 < w and n_in_train != c:
        return 'impossible'

    for _ in xrange(n-2):
        o, i, w = map(int, raw_input().split())
        n_past = n_in_train
        n_in_train += (i-o)
        if o > n_past:
            return 'impossible'
        elif n_in_train > c or n_in_train < 0:
            return 'impossible'
        elif 0 < w and n_in_train != c:
            return 'impossible'

    o, i, w = map(int, raw_input().split())
    n_past = n_in_train
    n_in_train += (i-o)
    if i > 0:
        return 'impossible'
    elif o > n_past:
        return 'impossible'
    elif n_in_train != 0:
        return 'impossible'
    elif w != 0:
        return 'impossible'

    return 'possible'

print check()
