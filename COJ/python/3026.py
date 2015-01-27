n = int(raw_input())
x_min, x_max = 100, 0 
y_min, y_max = 100, 0
for _ in xrange(n):
    x, y = map(int, raw_input().split())
    if x < x_min:
        x_min = x
    elif x > x_max:
        x_max = x
    
    if y < y_min:
        y_min = y
    elif y > y_max:
        y_max = y

print max(x_max-x_min,y_max-y_min)**2

