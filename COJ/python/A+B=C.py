word = raw_input()
sum = 0
for l in word:
    sum += ord(l) - 64
print sum
