import re

line = raw_input()
print re.sub('[10]+', lambda x: str(int(x.group(), 2)%1000000007), line)
