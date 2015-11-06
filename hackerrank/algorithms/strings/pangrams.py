s = input().lower()
dic = dict()
for l in s:
    dic[l] = 1

if ' ' in dic:
    dic.pop(' ', None)
if len(dic) < 26:
    print('not pangram')
else:
    print('pangram')
