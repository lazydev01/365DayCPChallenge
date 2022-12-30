"""

https://www.codechef.com/problems/XLSQUARE

"""


import math
t=int(input())
for _ in range(t):
    n,a=map(int,input().split())
    x=math.floor(math.sqrt(n))
    print(a*x)
    