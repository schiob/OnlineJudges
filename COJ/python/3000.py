from math import tan, radians
def equation(x, y, deg):
    if deg < 90 or 180 < deg < 270:
        slope = tan(radians(deg+180))
    else:
        slope = tan(radians(deg+90))
    return 1, slope, (slope * (-x)) + y

n = int(raw_input())
for _ in xrange(n):
    line = map(int, raw_input().split())
    print equation(line[0], line[1], line[2])
