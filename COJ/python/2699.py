sum = 0
for x in xrange(30):
    sum += int(raw_input())
print('%.3f') % (sum / 30.0 + sum)
