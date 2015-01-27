dir = {}
word = raw_input()
for l in word:
    dir[l] = 0
word2 = raw_input()
fands = ''
for l in word2:
    if dir.has_key(l) and fands.find(l) != -1:
        dir.pop()
        fands += l
    else:
        sec += l

