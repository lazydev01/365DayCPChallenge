```
"""

https://www.codechef.com/problems/BUY1GET1

"""
import math
t = int(input())
for _ in range(t):
    s = input()
    d = {}
    for i in range(len(s)):
        d[s[i]] = 0
    for i in range(len(s)):
        d[s[i]] += 1
    count = 0
    cost = 0
    for key in d:
        cost = math.ceil(d[key] / 2)
        count += cost
    print(count)

# sssssssaaa
# {'s' : 7, 'a': 3}
#  7/2
```
