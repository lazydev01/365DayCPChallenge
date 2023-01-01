"""

https://www.codechef.com/problems/MAXCOUNT


"""


t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    d={}
    l=[]
    v,c=0,0
    for i in range(len(a)):
        d[a[i]]=0
    for j in range(len(a)):
        d[a[j]]+=1
    for key in d:
        if c<d[key]:
            c=d[key]
    for key in d:
        if d[key]==c:
            l.append(key)
    v=min(l)
    print(v,c)
            