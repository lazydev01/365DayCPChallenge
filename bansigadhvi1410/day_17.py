"""

https://www.codechef.com/problems/CFMM

"""


t = int(input())
for _ in range(t):
    n = int(input())
    d = {}
    alphabets = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'];
    for i in alphabets:
        d[i]=0
    for i in range(n):
        s = input()
        for j in range(len(s)):
            d[s[j]]+=1
    max_count = float("inf")
    count_c = d['c']//2
    if(max_count>count_c):
        max_count = count_c
    count_o = d['o']//1
    if(max_count>count_o):
        max_count = count_o
    count_d = d['d']//1
    if(max_count>count_d):
        max_count = count_d
    count_e = d['e']//2
    if(max_count>count_e):
        max_count = count_e
    count_h = d['h']//1
    if(max_count>count_h):
        max_count = count_h
    count_f = d['f']//1
    if(max_count>count_f):
        max_count = count_f
    print(max_count)
